/* 
1. Candy Bar Sales
Using Program 1-1 as an example, write a program that
calculates how much a student organization earns during its
fund-raising candy sale. The program should prompt the
user to enter the number of candy bars sold and the amount
the organization earns for each bar sold. It should then
calculate and display the total amount earned.
*/
#include <iostream>
using namespace std;

int main(){
double num_sold, sale_price, earnings;

// Get the number of hours worked.
 cout << "How many candy bars did you sell? ";
 cin >> num_sold;

 // Get the hourly pay rate.
 cout << "How much do you get paid per candy bar? ";
 cin >> sale_price;

 // Calculate the pay.
 earnings = num_sold * sale_price;

 // Display the pay.
 cout << "You have earned $" << earnings << endl;
 return 0;
 }