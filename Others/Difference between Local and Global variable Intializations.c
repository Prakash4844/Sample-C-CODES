#include <stdio.h>
#include <stdlib.h>
int a; //Global Variable do not need initializations

int localvar() //User Defined function
{
    int b; // Local variable, if not initialized will pick garbage values
    printf("Local variable b : %d", b);

}
int main()
{

    printf(" Global Variable a : %d\n", a);
    localvar(); // Function Call


    return 0;
}

