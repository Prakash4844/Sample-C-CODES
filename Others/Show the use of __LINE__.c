// __LINE__ is a preprocessor macro that expands to current line number in the source file, as an integer.
// __LINE__ is useful when generating log statements, error messages intended for programmers, 
// when throwing exceptions, or when writing debugging code.
#include<stdio.h>
#include<stdlib.h>


int main()
{   

    printf("Hello, world!\n");
    printf("Line: %d\n", __LINE__);

    #line 36
    
    printf("Line: %d\n", __LINE__ );
    printf("Line: %d\n", __LINE__ );
    
    
    return 0;
}
