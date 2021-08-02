
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main(void)
{
    int salary;

    printf(" Enter the salary of employee = ");
    scanf("%d", &salary);

    if(salary >= 10000)
    {
          if(salary < 15000)
          {
                 printf("Employee grade A ");

          }


    }
    if(salary >= 15000 )
    {
		if(salary <= 25000)
      {
				printf("Employee grade B");
      }

    }
    if(salary > 25000)
    {
			printf("Employee grade C");

    }

}

