/* Program to print Pascal Triangle in C language */
#include <stdio.h>
 
long Factorial(int);
 
int main()
{
   int i, Number, j;
 
   printf("\n Please Enter the Number of rows you wish to see in pascal triangle\n");
   scanf("%d", &Number);
 
   for (i = 0; i < Number; i++)
   {
      for (j = 0; j <= (Number - i - 2); j++)
      {
      	printf(" ");
	  }
 
      for (j = 0; j <= i; j++)
      {
      	printf("%ld ", Factorial(i) / (Factorial(j) * Factorial(i-j)));
	  } 
 
      printf("\n");
   }
 
   return 0;
}
 
long Factorial(int Number)
{
   int i;
   long Fact = 1;
 
   for (i = 1; i <= Number; i++)
         Fact = Fact * i;
 
   return Fact;
}