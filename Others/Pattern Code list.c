// Left angle half Triangle of No.

#include <stdio.h>

void
main ()
{
  int i, rows, coulmn;

  printf ("Enter the Value of Rows: ");
  scanf ("%d", &i);

  for (rows = 1; rows <= i; rows++)
    {

      for (coulmn = 1; coulmn <= rows; coulmn++)
	{

	  printf ("%d  ", coulmn);

	}
      printf ("\n");
    }


}


//Left angle half Triangle of *

#include <stdio.h>

void
main ()
{
  int i, rows, coulmn;

  printf ("Enter the Value of Rows: ");
  scanf ("%d", &i);

  for (rows = 1; rows <= i; rows++)
    {

      for (coulmn = 1; coulmn <= rows; coulmn++)
	{

	  printf ("* ");

	}
      printf ("\n");
    }


}

//INVERSE lEFT ANGLE HALF TRIANGLE

#include <stdio.h>

void
main ()
{
  int rows, coulmn, i;

  printf ("Enter the Value of Rows: ");
  scanf ("%d", &i);

  for (rows = i; rows >= 1; --rows)
    {

      for (coulmn = 1; coulmn <= rows; ++coulmn)
	{

	  printf ("* ");

	}
        printf ("\n");
    }S
 

}