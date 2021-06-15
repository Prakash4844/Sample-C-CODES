/********************************************************
 * C 2nd Program to print Pascal Triangle using Factorial 
*********************************************************/


/*  Link to Flowchart of this Program - https://1.bp.blogspot.com/-paunrJAOm4c/XgH9941trTI/AAAAAAAAAPA/4AwYa0Fdi0EhI8mqsmc25SMpsW_iz6kTACLcBGAsYHQ/s1600/ezgif.com-gif-maker.png */


/*
* Algorithm of this Program 
* Start
* Declare variables i, j, num=1
* Take input (num) for number of rows
* Iterate loop1 for 'num' times
* Iterate loop2 inside loop1 for (num-1) times
* Iterate loop3 inside loop1 after loop2 for  0-i times
* Inside loop3 print num if j == 0 or i ==j
* Inside loop3 else than condition 7 calculate coeffecients according   to this formula num=num*(i-j+1)/j
* Print numbers after 3 spaces under loop2
* Print new line under loop1
* End
*/

#include<stdio.h> // include stdio.h
unsigned long int factorial(unsigned long int);

int main() 
{
    int n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    printf("\n");

    // loop for number of rows
    for(int i = 0; i <= n; i++)
    {
        // loop to print leading spaces at each line
        for(int space = 0; space < n - i; space++)
        {
            printf("   ");
        }

        // loop to print numbers in each row
        for(int j = 0; j <= i; j++)
        {
            printf("%-5d ", factorial(i) / (factorial(j) * factorial(i-j) ) );
        }

        // print newline character
        printf("\n");
    }    

    return 0;
}

unsigned long int factorial(unsigned long int n)
{
    unsigned long int f = 1;

    while(n > 0)
    {
        f = f * n;
        n--;
    }

    return f;   
}