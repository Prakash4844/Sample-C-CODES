//Write a program that will take three integers as input and will print the second largest number


#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Values: ");
    scanf("%d%d%d", &a, &b, &c);
    if(a>b && a>c)
    {
        if(b>c)
            printf("2nd largest: %d", b);
        else
            printf("2nd largest: %d", c);
    }
    else if(b>c && b>a)
    {
        if(c>a)
            printf("2nd largest: %d", c);
        else
            printf("2nd largest: %d", a);
    }
    else if(a>b)
            printf("2nd largest: %d", a);
        else
            printf("2nd largest: %d", b);
    return 0;
}
