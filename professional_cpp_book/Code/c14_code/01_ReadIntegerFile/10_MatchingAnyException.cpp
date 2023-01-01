import <fstream>;
import <iostream>;
import <vector>;
import <string>;
import <string_view>;
import <stdexcept>;

using namespace std;

vector<int> readIntegerFile(string_view filename)
{
	ifstream inputStream { filename.data() };
	if (inputStream.fail()) {
		// We failed to open the file: throw an exception.
		throw invalid_argument{ "Unable to open the file." };
	}

	// Read the integers one-by-one and add them to a vector.
	vector<int> integers;
	int temp;
	while (inputStream >> temp) {
		integers.push_back(temp);
	}

	if (!inputStream.eof()) {
		// We did not reach the end-of-file.
		// This means that some error occurred while reading the file.
		// Throw an exception.
		throw runtime_error{ "Error reading the file." };
	}

	return integers;
}

int main()
{
	const string filename{ "IntegerFile.txt" };
	vector<int> myInts;

	try {
		myInts = readIntegerFile(filename);
	} catch (...) {
		cerr << "Error reading or opening file " << filename << endl;
		return 1;
	}

	for (const auto& element : myInts) {
		cout << element << " ";
	}
	cout << endl;
}
