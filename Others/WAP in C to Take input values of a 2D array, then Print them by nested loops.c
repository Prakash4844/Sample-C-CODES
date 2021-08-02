// WAP in C to Take input values of a 2D array, then Print them by nested loops.
#include<stdio.h>

void main()
{
    int a[10][10];
    int i,j,r,c;

    printf("Enter the number of rows and cols \n");
    scanf("%d%d",&r,&c);

    if((r<10)&& (c<10))
    {
        printf("Enter the array values\n");
        for(i=0; i<r;i++)
        {
            for(j=0; j<c; j++)
            {  
                scanf("%d",&a[i][j]);
            }
        }

    printf("printing the array values\n");
    for(i=0; i<r;i++)
        {
            for(j=0; j<c; j++)
            {  
                printf("a[%d][%d]=%d\t",i,j,a[i][j]);
            }
            printf("\n");
        }

    }
    else
    {
        printf("Array index are out of bounds\n");
    }
}