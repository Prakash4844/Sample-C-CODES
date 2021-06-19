//C_program_to_Sum_element_of_a_array_with_Functions
#include <stdio.h>

int ArraySum(int arr[], int size) //UDF will take two arguments an Array and it's Size, for Summing array elements 
{
      int sum = 0;
      int i = 0;

      for(i=0; i<size; i++)                             //Runing Loop for i<size
    {
           sum = sum + arr[i];                             //Sum = Summing each array element with next array elements 
    }
        return sum;                                            // Returning Sum to the Calling Function
}

int main()
{   int size, i;
    int arr[50];

    printf("enter Array Size: ");                   //Taking array size from user
    scanf("%d", &size);                             //reading input

    printf("Enter %d elemets for Array: ", size);   //Taking array Elements
    for(i=0;i<size;i++)                             
    {
            scanf("%d", &arr[i]);                   //Reading input for array values
    }
  
    int arrsum = ArraySum(arr, size);                //Calling UDF Arraysum and Passing two Arguments Array and it's Size
   
    printf("Sum of array element is: %d", arrsum);      //Printing the Value Returned by ArraySum function
    return 0;
}
