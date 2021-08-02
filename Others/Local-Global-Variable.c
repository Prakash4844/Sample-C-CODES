#include <stdio.h>
int a=40;

int localvar()
{
    int b=44;
    printf("\nLocal variable b : %d", b);
    return ;
}
int localvar1()
{
    int a=55;
    printf("\nLocal variable a : %d", a);

}
void main()
{

    printf("a : %d", a);
    
    localvar();
    localvar1();
}

