/*
Write a program that calculates how much the nature center
spent to make the flower garden display described in the
previous problem. The program should prompt the user to
enter the cost of the soil, the flower seeds, and the fence. It
should then calculate and display the total amount spent.
*/

#include <iostream>
using namespace std;

int main(){
double width {}, length {}, area {}, soil_price {}, fence_price {}, seed_price {};
double soil_cost {}, fence_cost {}, seed_cost {}, total_cost{};
// Get the width.
cout << "Enter the width in feet: ";
cin >> width;

// Get the length
cout << "Enter the length in feet: ";
cin >> length;

// Get soil cost.
cout << "Enter the cost of soil per square foot: ";
cin >> soil_price;

 // Get fence cost.
cout << "Enter the cost of fencing per foot: ";
cin >> fence_price;

 // Get the seed cost.
cout << "Enter the cost of seeds per square foot of soil: ";
cin >> seed_price;

// Calculate the pay.
area = length * width;

soil_cost = area * soil_cost;

fence_cost = length + width;

seed_cost = area * seed_price;

total_cost = soil_cost + fence_cost + seed_cost;
// Display the pay.
cout << "Your garden's total cost is:  $" << total_cost << endl;
return 0;
}