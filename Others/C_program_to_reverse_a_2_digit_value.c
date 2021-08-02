#include <stdio.h>
 
void main()
{
	int a, a1, a2;

    printf("enter a 2 digit value: ");
	scanf("%d", &a);

	a2 = a/10;
	a1 = a%10;

	printf("2 Digit no. reversed : %d%d", a1,a2);


    //scanf("%d", &size);

    
}
