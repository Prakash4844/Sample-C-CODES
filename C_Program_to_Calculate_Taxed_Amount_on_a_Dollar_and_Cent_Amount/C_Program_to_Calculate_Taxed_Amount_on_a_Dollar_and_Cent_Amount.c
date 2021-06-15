//C program to calculate Taxed amount on a dollar and Cent amount
//Date 5 June 2021
//Written by Prakash4844

#include <stdio.h>                          //Header

int main()
{
    float dollars_and_Cents, taxed_Amount;  //Two float variable 
    

    //Taking User input for the amount of Dollar and cents
    printf("Enter Amount of Dollars and cents:");
    scanf("%f", &dollars_and_Cents);

    //Calculating TAX on Amount
    taxed_Amount = dollars_and_Cents + dollars_and_Cents/100 * 5;

    //Printing Tax Amoun_
    printf("Amount after 5 Percent Tax %.2f", taxed_Amount);
    return 0;
}
