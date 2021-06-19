//C_program_to_Print_Half_Pyramid_Triangle            *
//Date 19 June 2021                                  **      
//Written by Prakash4844                              ***
//                                                    ****
//                                                    *****  
#include <stdio.h>

void main()
{
    int i,j;

    for(i=1;i<=5;i++)               // Loop for rows
    {
        for(j=1;j<=i;j++)           //Loop for coulmn
        {
            printf("*");            //printing * according to j<i value

        }
        printf("\n");               //going to next line

    }
}

