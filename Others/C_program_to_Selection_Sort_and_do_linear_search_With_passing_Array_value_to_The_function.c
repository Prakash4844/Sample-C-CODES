//C program to Selection Sort and do linear search With passing Array value to The function
#include <stdio.h>
int sort(int *a,int n)
{ 
    int i,j,temp;
     for(i=0; i<n-1; i++)
    {
           
        for(j=0; j<n-i-1; j++)
        {
           if(a[j]>a[j+1])
           {
           	temp=a[j];
           	a[j]=a[j+1];
           	a[j+1]=temp;
		   }
        }
    }
 }
 
 int linear_search(int *a, int n, int find)
{
   int c;
 
   for ( c = 0 ; c < n ; c++ )
   {
      if ( *(a+c) == find )
         return c;
   }
 
   return -1;
}
 
  
int main()
{
    int a[100],i,n,key,search,position;
   
    printf("Enter size of the  array : ");
    scanf("%d", &n);
    
    printf("Enter elements in array : ");
    
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
     
        sort(a,n);
        
    for(i=0; i<n; i++)
    {
       printf("%d ",a[i]);
    }
    
    printf("\nEnter the number to search\n");
    scanf("%d",&search);
 
    position = linear_search(a, n, search);
    
    if ( position == -1 )
      printf("%d is not present in array.\n", search);
   else
      printf("%d is present at location %d.\n", search, position+1);
 
   return 0;
    
    
}