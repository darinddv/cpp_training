/*
Using Program 1-1 as an example, write a program that
calculates how much a Little League baseball team spent
last year to purchase new baseballs. The program should
prompt the user to enter the number of baseballs purchased
and the cost of each baseball. It should then calculate and
display the total amount spent to purchase the baseballs.
*/

#include <iostream>
using namespace std;

int main(){
double num_bought, sale_price, expenditure;

// Get the number of hours worked.
 cout << "How many baseballs did you purchase? ";
 cin >> num_bought;

 // Get the hourly pay rate.
 cout << "How much did each ball cost? ";
 cin >> sale_price;

 // Calculate the pay.
 expenditure = num_bought * sale_price;

 // Display the pay.
 cout << "You have earned $" << expenditure << endl;
 return 0;
 }