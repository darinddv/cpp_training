export module logger;

import <queue>;
import <string>;
import <thread>;
import <mutex>;
import <condition_variable>;

export
class Logger
{
public:
	// Starts a background thread writing log entries to a file.
	Logger();
	// Gracefully shut down background thread.
	virtual ~Logger();
	// Prevent copy construction and assignment.
	Logger(const Logger& src) = delete;
	Logger& operator=(const Logger& rhs) = delete;
	// Add log entry to the queue.
	void log(std::string entry);

private:
	// The function running in the background thread.
	void processEntries();
	// Helper method to process a queue of entries.
	void processEntriesHelper(std::queue<std::string>& queue, std::ofstream& ofs) const;
	// Boolean telling the background thread to terminate.
	bool m_exit{ false };
	// Mutex and condition variable to protect access to the queue.
	std::mutex m_mutex;
	std::condition_variable m_condVar;
	std::queue<std::string> m_queue;
	// The background thread.
	std::thread m_thread;
};
