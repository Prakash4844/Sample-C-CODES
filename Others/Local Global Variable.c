#include <stdio.h>
#include <stdlib.h>
int a=40;

int localvar()
{
    int b;
    printf("\nLocal variable b : %d", b);
    return ;
}
int localvar1()
{
    int a=55;
    printf("\nLocal variable a : %d", a);

}
int main()
{

    printf("a : %d", a);
    
    localvar();
    localvar1();
    return 0;
}

