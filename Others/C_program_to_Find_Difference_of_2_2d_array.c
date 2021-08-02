// WAP in C to Take input values of a Two 2D array, then Print Their Difference2
#include<stdio.h>

void main()
{
    int a[10][10],b[10][10],c1[10][10];
    int i,j,r,c;

    printf("Enter the number of rows and cols \n");
    scanf("%d%d",&r,&c);

    if((r<10)&& (c<10))
    {
        printf("Enter the first array values\n");
        for(i=0; i<r;i++)
        {
            for(j=0; j<c; j++)
            {  
                scanf("%d",&a[i][j]);
            }
        }
        printf("printing the First array values\n");
        for(i=0; i<r;i++)
        {
            for(j=0; j<c; j++)
            {  
                printf("a[%d][%d]=%d\t",i,j,a[i][j]);
            }
                printf("\n");
        }
        printf("Enter the second array values\n");
        for(i=0; i<r;i++)
        {
            for(j=0; j<c; j++)
            {  
                scanf("%d",&b[i][j]);
            }
        }
        printf("printing the Second array values\n");
        for(i=0; i<r;i++)
        {
            for(j=0; j<c; j++)
            {  
                printf("a[%d][%d]=%d\t",i,j,b[i][j]);
            }
                printf("\n");
        }

        for(i=0; i<r;i++)
        {
            for(j=0; j<c; j++)
            {  
                c1[i][j]=a[i][j]-b[i][j];
            }
        }
        printf("printing the Difference of array 1 and 2 values\n");
        for(i=0; i<r;i++)
        {
            for(j=0; j<c; j++)
            {  
                printf("a[%d][%d]=%d\t",i,j,c1[i][j]);
            }
                printf("\n");
        }
    }
    else
    {
        printf("Array index are out of bounds\n");
    }
}