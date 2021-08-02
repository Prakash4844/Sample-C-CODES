//Write a program that calculates the remaining balance on a loan after the first, second, and third monthly payments:
//Enter amount of loan: 20000.00
//Enter interest rate: 6.0
//Enter monthly payment: 386.66
//Balance remaining after first payment: $19713.34
//Balance remaining after second payment: $19425.25
//Balance remaining after third payment: $19135.71
//Display each balance with two digits after the decimal point. 
//Hint: Each month, the balance is decreased by the amount of the payment, but increased by the 
//balance times the monthly interest rate. To find the monthly interest rate, convert the interest 
//rate entered by the user to a percentage and divide it by 12.

#include <stdio.h>

int main()
{
    float loan_Amount = 20000.00, i, interest_Rate = 6.0 , monthly_payment=386.0;
   
/*  printf("enter Initial Loan amount: ");
    scanf("%f", loan_Amount);
    printf("enter Interest Rate: ");
    scanf("%f", interest_Amount);
*/
    for(i=1;i<4;i++)
    {
        loan_Amount = loan_Amount-monthly_payment+(loan_Amount*interest_Rate/100.0 /12.0);
        printf("Amount after Payment no.%.1f:%.2f\n", i, loan_Amount);

    }
    //Program Successfully, Returning Value 0 to Operating system. 
    return 0;
}
