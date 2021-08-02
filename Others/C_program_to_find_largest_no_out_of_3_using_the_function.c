// C program to find largest no out of 3 using the function
#include <stdio.h>

int largestNo(int,int,int);

void main()
{
    int a,b,c;
    printf("Enter the three numbers\n");
    scanf("%d%d%d",&a,&b,&c);

    int result = largestNo(a,b,c);
    printf("Largest number: %d\n",result);
    
}

int largestNo(int a,int b,int c)
{
    if(a>b)
    {
        if(a>c)
        {
            return a;
        }
        else
        {
           return c;
        }  
    }
    else
    {
        if(b>c)
        {
            return b;
        }
        else
        {
            return c;
        }
    }
}