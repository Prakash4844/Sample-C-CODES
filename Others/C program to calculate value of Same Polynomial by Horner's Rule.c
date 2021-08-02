// C Practice File
// C program to calculate value of a Polynomial (3x^5+2x^4-5x^3-x^2+7x-6) by Horner's Rule
#include <stdio.h>

int main()
{
    int x, value_of_Polynomial;

    printf("Enter Value of X:");
    scanf("%d", &x);

    value_of_Polynomial = ((((3*x + 2)*x - 5)*x - 1)*x + 7)*x - 6;

    printf("Value of the Polynomial %d", value_of_Polynomial);
    return 0;
}
