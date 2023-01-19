#include <stdio.h>  

int main(void){  
    double v, tol;  
    double rnom, rlow, rhigh;  
    double inom, ilow, ihigh;  
    double pnom, plow, phigh;  

    printf("This program determines current and power.\n");  
    printf("Please enter the voltage source in volts.\n");  
    scanf("%lf", &v);  
    printf("Please enter the nominal resistance in ohms.\n");  
    scanf("%lf", &rnom);  
    printf("Please enter the resistor tolerance in percent.\n");  
    scanf("%lf", &tol);  

    tol = tol/100.0; /* turn tolerance into a factor */  
    rlow = rnom - rnom*tol;  
    rhigh = rnom + rnom*tol;  
    inom = v/rnom;  ihigh = v/rlow;  
    ilow = v/rhigh;  
    pnom = v * inom;  
    plow = v * ilow;  
    phigh = v * ihigh;  
    
    printf("Resistance (ohms) Current (amps) Power (watts)\n");  
    printf("%lf %lf %lf\n", rnom, inom, pnom);  
    printf("%lf %lf %lf\n", rhigh, ilow, plow);  
    printf("%lf %lf %lf\n", rlow, ihigh, phigh);  
} 

