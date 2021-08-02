// WAP in C to Take input values of a 2D array, then Print Their Transpose
#include<stdio.h>

void main()
{
    int a[10][10],transpose[10][10];  //,c1[10][10]2
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
         // computing the transpose
        for (int i = 0; i < r; ++i)
        {
                for (int j = 0; j < c; ++j) 
                {
                    transpose[j][i] = a[i][j];
                }
        }
            // printing the transpose
            printf("\nTranspose of the matrix:\n");

        for (int i = 0; i < c; ++i)
        {
            for (int j = 0; j < r; ++j) 
                {
                    printf("Transpose[%d][%d]=%d\t",i,j,transpose[i][j]);
                    if (j == r - 1)
                    printf("\n");
                }
        }
            
    }
}