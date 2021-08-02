//Write a Program To Compute check/Varify digit of the Bar CODE[See info for more detail] 

/* The Bar Code is Known as UPC code{Universal Product code} it identifies both manufacturer and 
 * Product. Each Barcode have 12 digit[ex. "0 13800 15173 5"].it's usually written under the barcode.
 *******************************************************************************************************

 * The First digit identifies the type of item{0 or 7 is for most cases, 2 indicates the item must be 
 * weighed, 3 for Drug and Health related marchendise and 5 for coupons}.
 * 
 * The 1st 5 digit 2-6 {5 digits, ex. 13800} digit identifies Manufacturer like 13800 for Nestle USA's 
 * Frozen food divison
 * 
 * the 2nd 5 digit 7-11{5 digit, ex. 15173} digit identify the product including Size.
 * 
 * The Final 12th Digit is check/verify digit it's used for identifying an error in preceding digits
 * 
 * if UPC is scanned incorrectly the first 11 digit will not be consistant. and BARCODE scanner will
 * reject the Entire code
 * *****************************************************************************************************
 
 * To Calculate this is to be done.

 * 1. Add the First, Third, fifth, seventh, ninth and eleventh digit in SUM 2
 * 2. Add the Second, fourth, Sixth, eighth, tenth digit in SUM 1
 * 3. Multiply the SUM 1 by 3 and Add it to SUM 2 and Subtract 1 from it to get adjusted total
 * 4. Compute the Remainder when adjusted total is divided by 10
 * 5. Subtract the Remainder from 9

*/

#include<stdio.h>
 
int main() 
{
   int digit1, sum1=0, sum2=0, adjustedTotal, i, j,checkDigit,vDigit;
   int  group1[12]; // = {0,1,3,8,0,0,1,5,1,7,3,0};

   printf("\n \t \t Program To Compute check/Varify digit of the Bar CODE Each Barcode have 12 digit[ex. ""0 13800 15173 5""]\n");
   printf("Each Value are as follows\nEx.\n0 - \t\tFirst digit\n13800 15173 - \tMiddle 10 Digit\n5 - \t\tCheck/Varify digit\n");

   printf("Enter the first digit: ");
   scanf("%1d", &digit1);

   printf("Enter middle Group of 10 digit: ");
   for(i=1;i<11;i++)
   {
      scanf("%d", &group1[i]);

   }

    for(i=0;i<12;i++)
   {
   if(i%2==0)
      {
             sum1 = sum1 + group1[i];
      }
      else if(i%2==1)
      {
             sum2 = sum2 + group1[i];
      }
   }

   adjustedTotal = 3 * sum1 + sum2;
   checkDigit = 9-((adjustedTotal - 1 ) % 10);

   printf("Enter Varification digit: ");
   scanf("%d", &vDigit);

   if(vDigit==checkDigit)
   {
      printf("Varification Code Valid");
   }
   else
   {
      printf("Varification Code inValid!!");

   }
  // printf("Check/varify digit: %d\n", 9-((adjustedTotal - 1 ) % 10));

   return 0;
}