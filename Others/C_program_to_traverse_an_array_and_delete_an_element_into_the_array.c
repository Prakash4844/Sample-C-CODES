//C program_to_traverse_an_array_and_delete_an_element_into_the_array  
#include<stdio.h>
#include<stdlib.h>

int main()
{   int a[50],size, pos, item, i;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array: ");

    for(i=0;i<size;i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the position from where the element is to be deleted in array: ");
    scanf("%d", &pos);

    if(pos <= 0 || pos > size+1)
    {
        printf("\ninvalid! out of arrays range.");
        exit(1);
    }
    else
    {
            item= a[pos-1];
            for(i=pos-1;i<=size-1;i++) //settingi to pos - 1 of the array a and if position where element is to be inserted  less then current 
            {                              //sizethen copy the value of next array location to previous one
                a[i] = a[i+1];
            }

    }
        size--;

    printf("Entered elements of the array are: \n");
    
    for(int i=0;i<size;i++)
    {
         printf("%d \n", a[i]);
    }

    return 0;
}
