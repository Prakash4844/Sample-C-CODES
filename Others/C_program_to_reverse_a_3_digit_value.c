#include <stdio.h>
 
void main()
{
	int a, a1, a2, a3;

    printf("enter a 3 digit value: ");
	scanf("%d", &a);

	a3 = a/100;
    a2 = a/10%10;
	a1 = a%10;

	printf("2 Digit no. reversed : %d%d%d", a1,a2,a3);


    //scanf("%d", &size);

    
}
