//Date 19 June 2021
//Written by Prakash4844
// C_Program_to_Multiply_two_2D_Array_Matrices

#include<stdio.h>    
 
int main()
{  
    int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;    
 
    printf("enter the number of row=");                                 //taking input for row no.
    scanf("%d",&r);    
    printf("enter the number of column=");                               //Taking input for Column no.
    scanf("%d",&c);    
    printf("enter the first matrix element=\n");                            //Taking input from user for element of 1st Matrix
    
    for(i=0;i<r;i++)                                        //Row loop
    {    
        for(j=0;j<c;j++)                                        //Coulmn loop
        {    
            scanf("%d",&a[i][j]);                                     //Reading input
        }       
    }    
    printf("enter the second matrix element=\n");                            //Taking input from user for element of 1st Matrix
    
    for(i=0;i<r;i++)                                         //Row loop
    {    
        for(j=0;j<c;j++)                                         //Coulmn loop
        {    
            scanf("%d",&b[i][j]);                                      //Taking input from user for element of 1st Matrix
        }    
    }    
    
    printf("multiply of the matrix=\n");  
    
    for(i=0;i<r;i++)                                         //Row loop
    {    
        for(j=0;j<c;j++)                                           //Coulmn loop
        {    
            mul[i][j]=0;                                              //initialized Multiplication matrix = 0
            for(k=0;k<c;k++)                                                // Multiplication loop
            {    
            mul[i][j]+=a[i][k]*b[k][j];                                         //// Multiplying first and second matrices and storing it in mul
            }      
    }    
       
    for(i=0;i<r;i++)                                            //for printing result 
    {    
            for(j=0;j<c;j++)    
        {    
            printf("%d\t",mul[i][j]);    
        }    
            printf("\n");    
    }    
    return 0;  
}  