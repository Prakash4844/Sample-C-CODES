//C program to traverse an array and print it's element 

#include<stdio.h>

int main()
{   int a[50],size,i;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array: ");

    for(i=0;i<size;i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Entered elements of the array are: \n");
    
    for(i=0;i<size;i++)
    {
         printf("%d \n", a[i]);
    }

    return 0;
}
