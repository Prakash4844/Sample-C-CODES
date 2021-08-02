// Insertion sort with Funtions
#include<stdio.h>

int insertion_sort(int[], int);

int main() {
	int arr[100],count,n;
	
	printf("Enter number of elements: ");
    scanf("%d", &n);

	printf("\nEnter Elements to sort: ");
	
	for (count=0;count<n;count++)
	{
	  scanf("%d",&arr[count]);
	} 
	  
	insertion_sort(arr, n);
	
	printf("\n\ninsertion sorted: ");
	
	for (count=0;count<n;count++)
	{
	  printf("%d ",arr[count]);
	} 
	  return 0;
}

int insertion_sort(int arr[], int n) 
{
	int i,j,temp;
	
	for (i = 1 ; i <= n - 1; i++)
    {
	    j = i;
            while ( j > 0 && arr[j-1] > arr[j])
            {	        
                temp     = arr[j];
                arr[j]   = arr[j-1];
                arr[j-1] = temp;
                j--;
            }
    }
}
