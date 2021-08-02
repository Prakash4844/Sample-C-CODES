#include <stdio.h>
//#include <stdlib.h>
//#include <conio.h>

int main()
{
    int age;
    printf("Enter the age = ");
    scanf("%d", &age);
    //printf("The age is = %d", age);
    if(age>=18 && age<=30)
    {
        printf("Launda jawan hai, Ladki dhundho iske liye!");

    }
    else if (age < 18 )
    {
        printf("bcha hai tu abhi.");

    }
    else if (age > 30 && age <=100)
    {
        printf("Budhe ho rhe ho aap!");

    }
    else if (age > 100)
    {
        printf("Jhoot bol rha hai bsdk!!");

    }
    return 0;
}


