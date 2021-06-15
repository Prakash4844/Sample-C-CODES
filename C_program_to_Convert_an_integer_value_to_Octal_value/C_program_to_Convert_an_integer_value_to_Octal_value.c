//C program to Print a Octal equivalent of a Integer Decimal value  
//Date 5 June 2021
//Written by Prakash4844


#include <stdio.h>                                          //Header
 
void main()
{
	int n;
    
    printf("Enter a number between 0 and 32767: ");             
    scanf("%d", &n);                                        //taking a User input of Int value < 32767
  

//Divide the decimal number by 8.
//Store the remainder.
//Repeat steps 2 and 3 until the number can be divided.
//Print the reverse of the remainder, which is the octal equivalent of the decimal number.
    printf("In octal, your number is: %d%d%d%d%d\n", (n/4096)%8, (n/512)%8, (n/64)%8, (n/8)%8, n%8);        
    
    
}
