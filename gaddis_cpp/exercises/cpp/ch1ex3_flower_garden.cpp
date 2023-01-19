/*
Write a program that calculates the size of a rectangular
flower garden in a nature center. The program should
prompt the user to enter the length and width of the garden
in feet. It should then calculate and display the number of
square feet in the garden.
*/

#include <iostream>
using namespace std;

int main(){
double width, length, area;

// Get the number of hours worked.
 cout << "Enter the width in feet: ";
 cin >> width;

 // Get the hourly pay rate.
 cout << "Enter the length in feet: ";
 cin >> length;

 // Calculate the pay.
 area = length * width;

 // Display the pay.
 cout << "Your garden is " << area << " square feet." << endl;
 return 0;
 }