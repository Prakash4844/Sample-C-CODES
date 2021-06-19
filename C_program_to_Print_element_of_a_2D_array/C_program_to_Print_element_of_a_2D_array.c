//C_program_to_Print_element_of_a_2D_array
//Date 19 June 2021
//Written by Prakash4844
#include <stdio.h>
int main()
{
    //Declaring a Two Dimensional Array
   int arr[10][10];
   int i, j, r, c;

    printf("enter the number of row=");                                 //taking input for row no.
    scanf("%d",&r);    
    printf("enter the number of column=");                               //Taking input for Column no.
    scanf("%d",&c);    
    printf("enter the first matrix element=\n");                            //Taking input from user for element of 1st Matrix
    
    for(i=0;i<r;i++)                                        //Row loop
    {    
        for(j=0;j<c;j++)                                        //Coulmn loop
        {    
            scanf("%d",&arr[i][j]);                                     //Reading ij input
        }       
    } 
   

   for(i=0;i<r;i++)                                               //Row loop                         
   {
       for(j=0;j<c;j++)                                                     //Coulmn loop
       {

           printf("The Array Value [%d]X[%d] is %d\n", i, j, arr[i][j]);            //Printing ij values

       }
       

   }
    return 0;
}
