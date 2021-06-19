// C Practice File
// C_program_to_take_a_input_of_amount_in_US_$_and_show_how_to_pay_the_amount_using_Bills_of: $20, $10, $5, $1 respectively.
// Date 19 June 2021
// .Written by Prakash4844
#include <stdio.h>

int main()
{
    // Variable declarations of $ amount and Bills of $20, $10, $5, $1 respectively.
    int amount_in_dollar, bill_of_20, bill_of_10, bill_of_5, bill_of_1;

    //Taking Input for Intial Value in $
    printf("Enter Value of Amount in Dollar:");
    scanf("%d", &amount_in_dollar);

    //For Bills of $20
    bill_of_20 = amount_in_dollar/20;
    amount_in_dollar = amount_in_dollar - bill_of_20 * 20;

    //For Bills of $10
    bill_of_10 = amount_in_dollar/10;
    amount_in_dollar = amount_in_dollar - bill_of_10 * 10;

    //For Bills of $5
    bill_of_5 = amount_in_dollar/5;
    amount_in_dollar = amount_in_dollar - bill_of_5 * 5;

    //For Bills of $1
    bill_of_1 = amount_in_dollar/1;
    amount_in_dollar = amount_in_dollar - bill_of_1 * 1;

    //Printing the minimum amount of Each bill required to pay the Intial Amount.
    printf(" Bill of $20: %d \n Bill of $10: %d \n Bill of $5: %d \n Bill of $1: %d", bill_of_20, bill_of_10, bill_of_5, bill_of_1);
    
   
    return 0;
}
