//program to print even and odd no. seperately from an array
#include<stdio.h>
int main()
{
   int n, a[20],even=0,odd=0;

   printf("Enter the size of the array: ");
   scanf("%d", &n);

   printf("Enter array elements: \n");
   for(int i=0; i<n; i++)
   {
      scanf("%d",&a[i]);
   } 
  
  printf("Even No:");
  // printf("Even numbers in the array are: \n");
   for(int i=0; i<n; i++)
   {
     if(a[i]%2==0)
     {
     printf("%d, ", a[i]);
     even++;
     }
   }

    printf("\nOdd No:");
   //printf("\nOdd numbers in the array are: \n");
   for(int i=0; i<n; i++)
   {
     if(a[i]%2!=0)
     {
     printf("%d, ", a[i]);
     odd++;
     }
   }

   printf("\neven: %d \nOdd: %d ", even, odd);

   return 0;
}