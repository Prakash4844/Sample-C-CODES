//_C code for very Basic calculator with use of Functions
//Date 5 June 2021
//Written by Prakash4844

#include <stdio.h>                                           //Header

int addition (int num1, int num2)                            //UDF for Sum
{
  int sum;
  sum = num1 + num2;
  return sum;
}

int subtraction (int num1, int num2)                          //UDF for Difference
{
  int difference;
  difference = num1 - num2;
  return difference;
}

int multiplication (int num1, int num2)                       //UDF for Product
{
  int multiple;
  multiple = num1 * num2;
  return multiple;
}

int devide (int num1, int num2)                               //UDF for Divide
{
  int division;
  division = num1 / num2;
  return division;
}

int Modulus (int num1, int num2)                              //UDF for Modulo
{
  int mod;
  mod = num1 % num2;
  return mod;
}

void main ()
{
  int var1, var2;

  //Taking two int value from User
  printf ("Enter number 1: ");
  scanf ("%d", &var1);

  printf ("Enter number 2: ");
  scanf ("%d", &var2);

  //Calling Calculation functions 
  int add = addition (var1, var2);
  int sub = subtraction (var1, var2);
  int mult = multiplication (var1, var2);
  int divi = devide (var1, var2);
  int modu = Modulus (var1, var2);

  //Printing Calculated Values
  printf ("\nAddition Output: %d", add);
  printf ("\nSubtraction Output: %d", sub);
  printf ("\nMultiplication Output: %d", mult);
  printf ("\nDivision Output: %d", divi);
  printf ("\nmodulus Output: %d", modu);

}