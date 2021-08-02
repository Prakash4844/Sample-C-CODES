//Pascal Triangle Program in C Without Using Factorial


#include<stdio.h>
int main()
{
  int n;
  printf("Enter the number of rows: ");
  scanf("%d",&n);
  for(int row=1; row<=n; row++)
  {
    int a=1;

    for(int s=1; s<=40-row; s++)
    printf(" ");

    for(int i=1; i<=row; i++)
    {
      printf("%d ",a);
      a = a * (row-i)/i;
    }

    printf("\n");
  }

  return 0;
}