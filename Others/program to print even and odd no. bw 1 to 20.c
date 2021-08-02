//program to print even and odd no. b/w 1 to 20
#include <stdio.h>

int main ()
{
  int i, r;

  printf ("\n\nDisplay the even numbers between 1 to 20");

    for (i = 1; i <= 20; i++)
    {
      r = i % 2;

      if (r == 0)
      {
        printf ("\n %d", i);
      }
    }

  printf ("\n\nDisplay the odd numbers between 1 to 20");

    for (i = 1; i <= 20; i++)
    {
      r = i % 2;

      if (r == 1)
      {
        printf ("\n %d", i);
      }  
    }
    
  return 0;
}
