//C program to calculate the volume of Sphere by formula 4/3*pi*r*r*r
//Date 5 June 2021
//Written by Prakash4844

#include <stdio.h>      //Header

int main()
{
    float radius, pi=3.1415;        //Two float Variable with one being fixed value PI


    //Taking User Input for Radius of Sphere in Decimal numbers
    printf("Enter the Value of Radius containing Decimal no.: ");
    scanf("%f", &radius);

    //Calculating the volume of sphere V= 4/3 πr³
    float v = (4.0f/3.0f)*pi*radius*radius*radius;
    
    ////Printing the volume of sphere
    printf("Volume of The sphere: %.2f", v);
    return 0;
}
