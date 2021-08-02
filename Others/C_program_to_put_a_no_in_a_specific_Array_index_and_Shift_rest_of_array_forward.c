//Test File!
// C program to put a no. in a specific Array index and Shift rest of array forward
#include<stdio.h>
 void main()
  {
    int i,a[5],no,pos;

    printf("Enter values in array: ");

    for(i=0;i<5;i++)
    {
      scanf("%d",&a[i]);
    }

    printf("\narray values: ");

    for(i=0;i<5;i++)
    {
      printf("  %d",a[i]);
    }

    printf("\nEnter possition number: ");
    scanf("%d",&pos);

    if(pos>5)
    {
      printf("\nout of range");
    }
    else
    {
      printf("\nEnter new value = ");
      scanf("%d",&no);
      --pos;
      for(i=5;i>=pos;i--)
      {
        a[i+1]=a[i];
      }
      a[pos]=no;
      printf("\nNew array values: ");
      for(i=0;i<6;i++)
      {
        printf("  %d",a[i]);
      }
    }
  }