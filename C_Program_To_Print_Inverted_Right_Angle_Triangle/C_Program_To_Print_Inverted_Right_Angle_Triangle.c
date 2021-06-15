//C program to Print Inverted Right angle Triangle
//Date 5 June 2021
//Written by Prakash4844


#include <stdio.h>                 //Header 

void main()                        //Program starts from here
{
    int i,j;

    for(i=5;i>=1;i--)              //1st Loop for Rows 
    {
        for(j=1;j<=i;j++)          //2nd Loop for Coulmns
        {
            printf("*");           //Printing star

        }
        printf("\n");              //Printing Next line 

    } 
  
}

