
//Code in C Program for Pascal's Triangle Without Using Function

#include<stdio.h>
#include<conio.h>
void main()
{
    int x,y,n,a,z,s;
    /* x, y are for loop control and n is to store the input limit*/
    printf("Enter the limit: ");
    /*limit implies number second from edge in Pascal's tringle*/
    scanf("%d",&n);
    printf("\n\n");
    s=n;
    for(x=0; x<=n; x++)
    {
        a=1;
        for(z=s; z>=0; z--)
            printf(" ");
 
        s--;/* s is for printing the space*/
        for(y=0; y<=x; y++)
        {
            printf("%d ",a);
            a=(a*(x-y)/(y+1));
        }
        printf("\n");
    }
    getch();
}