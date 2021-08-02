//C_program_to_take_Input_in_an_Array_and_Calculate_their_sum_and_return_it_as_a_pointer

#include <stdio.h>
 
void main()
{
	int arr[50],i,size;
	int sum;
 
    printf("\nEnter the size of the array: ");
    scanf("%d", &size);

    printf("\n\nEnter the %d elements of the array: \n", size);
    for(i = 0; i < size; i++)
    scanf("%d", &arr[i]);
 
 
  	int addnum(int *ptr, int size);
     	sum = addnum(arr, size);
 
        printf("Sum of all array elements = %5d\n", sum);
 
}
 
int addnum(int *ptr, int size)
{
	int index, total = 0;
	for (index = 0; index < size; index++) 
        {
		total += *(ptr + index);
	}
	return(total);
 
}