//_Program to print reverse array in C
#include<stdio.h>

int main()
{
    int arr[50], i, size;  

    printf("\nEnter the size of the array: ");
    scanf("%d", &size);

    printf("\n\nEnter the %d elements of the array: \n\n", size);
    for(i = 0; i < size; i++)
    scanf("%d", &arr[i]);

    printf("\nThe array elements in reverse order:\n");
    for(i=size-1; i>=0; i--)
    {
        if(i==0)
            printf("%d", arr[i]);
        else
            printf("%d, ", arr[i]);
    }

    return 0;
}
