//C Program To Define, intialize and Print address and value of variables using Pointers.

#include<stdio.h>    
 
int main()
{  
    int a=10,b=20,c=30;
    int *p, *p1, *p2;

    p=&a;
    p1=&b;
    p2=&c;

    printf("&a = %p \n", &a);

    printf("p = %p \n", p);
    printf("*p = %d \n", *p);

    printf("\n&b = %p \n", &b);

    printf("p1 = %p \n", p1);
    printf("*p = %d \n", *p1);

    printf("\n&c = %p \n", &c);

    printf("p2 = %p \n", p2);
    printf("*p = %d \n", *p2);

    return 0;  
}  