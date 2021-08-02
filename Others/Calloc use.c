// Sample program of Calloc

#include <stdio.h>

void main()
{
	int*a
	int size,i;
	
	printf("Enter the size of an array: ");
	scanf("%d", &size);
	
	a=(int*)calloc(size,sizeof(int));
	
	printf("Enter array values: ");
	
	for(i=0;i<size;i++)
	{
		
		scanf("%d", &a[i]);
	
	}
	
	printf("Array value are\n: ");
	
	for(i=0;i<size;i++)
	{
		
		printf("%d", a[i]);
	
	}
	

}