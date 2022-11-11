/**************************************************************
 *Class:                     CSCI 112                                                                                        *
 *Instructor:               Ronald Burgher                                                                              *
 *Programmer:          Ethan Grant                                                                                    *
 *Project:                 Pop Project #1                                                                                 *
 **********************************************************************************************/

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {

    // Declare Variables
    double height = 0;
    double width = 0;
    double nitrogen = 0;
    double squareFeet = 0;
    double nitrogenNeeded = 0;
    double nitrogenDecimal = 0;
    double fertilizerFinal = 0;
    
    // Get the data of the lawn in square feet
    printf("The length of your lawn in feet: \n");
    scanf("%lf", &height);
    
    printf("The width of your lawn in feet: \n");
    scanf("%lf", &width);
    
    squareFeet = height * width;
    
    // Configure the amount of pounds of nitrogen you need
    printf("Your total square feet in lawn is: %.2lf \n", squareFeet);
    
    nitrogenNeeded = squareFeet / 1000;
    
    // Get data from user
    printf("Please enter the percentage of nitrogen in your fertilizer: \n");
    scanf("%lf", &nitrogen);
    
    // Conver to a decimal number
    nitrogenDecimal = nitrogen / 100;
    
    // Determine the percentage of nitrogen needed
    fertilizerFinal = nitrogenNeeded/nitrogenDecimal;
    
    printf("You will need %.2lf pounds of fertilizer \n", fertilizerFinal);

    return 0;
}

