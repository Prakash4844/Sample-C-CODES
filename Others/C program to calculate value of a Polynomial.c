// C Practice File
// C program to calculate value of a Polynomial (3x^5+2x^4-5x^3-x^2+7x-6)
#include <stdio.h>

int main()
{
    int x, value_of_Polynomial;

    printf("Enter Value of X:");
    scanf("%d", &x);

    value_of_Polynomial = 3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x + 7*x - 6;

    printf("Value of the Polynomial %d", value_of_Polynomial);
    return 0;
}
