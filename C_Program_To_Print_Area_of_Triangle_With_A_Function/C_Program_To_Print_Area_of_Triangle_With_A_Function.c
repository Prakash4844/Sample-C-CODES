//C program to Print Area of a Triangle with functions
//Date 5 June 2021
//Written by Prakash4844


#include<stdio.h>                                  //Header 

float area(float b,float h)                        //User Defined Funtion with two Formal parameters of Type Float
{  
	return (b*h)/2;                                 //Returning [base x Height Devided by 2 ]
}
 
int main()                                         
{
	float b,h,a;                                    // Three float Variable

	printf("enter base of triangle: ");             
	scanf("%f",&b);                                 //Taking value of Base From User 
	
	printf("enter height of the triangle: ");
	scanf("%f",&h);                                 //Taking value of height From User 

	a=area(b,h);                                    //Calling the area funtion and Passing value of Base and Height as actual Parameter

	printf("AOT: %f\n",a);                          //Printing Area of triangle 

	return 0;
}