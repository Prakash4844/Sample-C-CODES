/* WAP to compute the pension of an employee.
	If the person is male.
		Age >= 90 pension is 4000
		Age >= 60 pension is 6000
		Age < 60 pension is 0
if the person is female.
		Age >= 90 pension is 3000
		Age >= 60 pension is 5000
		Age < 60 pension is 0 */


#include<stdio.h>

 void 
main () 
{
int age;
char gen;
  
printf ("Are You a Male or Female(m/f): ");
scanf ("%c", &gen);
  
if (gen == 'm' || gen == 'M')
    {
      
        printf ("\nEnter your age: ");
        scanf ("%d", &age);
    
        if (age < 60)
	{
        printf ("\n Not eligible for pension ");
    
	}
      
      
        if (age >= 90)
	{
	    printf ("\n Your pension is 4000 ");

    }
    
         if (age >= 60 && age <= 90)
	{
        printf ("\nYour pension is 6000 ");
	
    }
     

}
  else if (gen == 'f' || gen == 'F')
    {
        printf ("\nEnter your age: ");
        scanf ("%d", &age);
        
        
          if (age < 60)
	{
        printf ("\n Not eligible for pension ");
	
    }
        
        if (age >= 90)
	{
        printf ("\n Your pension is 3000 ");
	
    }
      
        if (age >= 60 && age <= 90)
	{
        printf ("\nYour pension is 5000 ");
	
    }
    
    
    }
  
  else
    
    {
        printf ("Invalid Choice");
    }

}
