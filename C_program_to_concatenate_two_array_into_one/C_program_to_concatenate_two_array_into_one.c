//C_program_to_concatenate_two_array_into_one.
//Date 19 June 2021
//Written by Prakash4844
#include <stdio.h> 

int main() 
{ 
   int arr1 [10], arr2 [10], arr3 [20]; //Defining 3 Array 
   int i, n1, n2, m, index=0; 
 
   printf("\n Enter the Size of array 1: "); //Taking input for size of 1st Array
   scanf("%d", &n1); //Reading Input

   printf("\n Enter the Elements of the first array: "); //Taking input for 1st Array elements

   for(i=0;i<n1;i++)  
   { 
     scanf ("%d",&arr1[i]); //Reading Input
   } 
   
   printf("\n Enter the size of array 2: "); //Taking input for size of 2nd Array
   scanf ("%d", &n2 ); //Reading Input

   printf("\n Enter the Elements of the second array: "); //Taking input for 2nd Array elements

   for(i=0;i<n2;i++) 
   { 
      scanf ("%d", &arr2[i]); //Reading input
      m = n1+n2; 
   } 
   //Concatenating Arrays
   for(i=0;i<n1;i++) 
   { 
     arr3[index]=arr1[i]; 
     index++; 
   } 
   
   for(i=0;i<n2;i++) 
   { 
      arr3[index]=arr2[i]; 
      index++; 
   } 
   
   printf ("\n\n The merged array is"); 

   for(i=0;i<m;i++) 
   { 
     printf("\t\n Arr[%d] = %d", i, arr3[i]); 
   } 
     return 0; 
 }