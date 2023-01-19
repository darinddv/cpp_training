#include <iostream>
#include <iomanip>

int main(){  
    double v, tol;  
    double rnom, rlow, rhigh;  
    double inom, ilow, ihigh;  
    double pnom, plow, phigh;  

    std::cout << "This program determines current and power.\n";  
    std::cout << "Please enter the voltage source in volts.\n";  
    std::cin >> v;  
    std::cout << "Please enter the nominal resistance in ohms.\n";  
    std::cin >> rnom;  
    std::cout << "Please enter the resistor tolerance in percent.\n";  
    std::cin >> tol; 

    tol = tol / 100.0; /* turn tolerance into a factor */  
    rlow = rnom - rnom * tol;  
    rhigh = rnom + rnom * tol;  
    inom = v / rnom;  
    ihigh = v / rlow;  
    ilow = v / rhigh;  
    pnom = v * inom;  
    plow = v * ilow;  
    phigh = v * ihigh; 

    std::setw(6);
    std::cout << "Resistance (ohms) Current (amps) Power (watts)\n";  
    std::cout <<  rnom << " " << inom  << " " << pnom << std::endl;  
    std::cout <<  rhigh << " " << ilow << " " << plow << std::endl;  
    std::cout <<  rlow << " " << ihigh << " " << phigh << std::endl;  
}