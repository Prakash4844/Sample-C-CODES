//C program_to_traverse_an_array_and_insert_an_element_into_the_array  
#include<stdio.h>
#include<stdlib.h>

int main()
{   int a[50],size,i, num, pos;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array: ");

    for(i=0;i<size;i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the elements That is to be inserted in the array: ");
    scanf("%d", &num);

    printf("Enter the position to where the element is to be inserted in array: ");
    scanf("%d", &pos);

    if(pos <= 0 || pos > size+1)
    {
        printf("\ninvalid! out of arrays range.");
        exit(1);
    }
    else
    {

            for(i=size-1;i>=pos-1;i--) //settingi to size - 1 of the array a and if position where element is to be inserted greater less then current 
            {                              //position then copy the value to next array location
                a[i+1] = a[i];
            }

    }
        a[pos-1] = num;
        size++;

    printf("Entered elements of the array are: \n");
    
    for(i=0;i<size;i++)
    {
         printf("%d \n", a[i]);
    }

    return 0;
}
