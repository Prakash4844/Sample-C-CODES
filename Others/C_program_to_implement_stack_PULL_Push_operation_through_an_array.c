//C_program_to_implement_stack_PULL_Push_operation_through_an_array 
#include<stdio.h>
#include<stdlib.h>
#define ARRMAX 5

int top = -1; //meaning stack is currently empty!, it is global variable because every function will need it
int stack[ARRMAX];
int i;

void push(int data)
{
     top++;

    if(top==-1)
    {
        printf("Stack underflow!");
        return;
    }
    else if(top==ARRMAX)
    {
        printf("stack overflow!");
        return;

    }
    else
    {
        stack[top] = data;

         printf("elements of stack\n");
    
        for(i=0; i <= top; i++)
        {
            printf("stack values %d: %d \n", i, stack[i]);
        }

        return;
    }

}

void pull(int data)
{

    if(top==-1)
    {
        printf("Stack underflow!");
        return;
    }
    else if(top==ARRMAX)
    {
        printf("stack overflow!");
        return;

    }
    else
    {
        //stack[top] = data;
        top--;

         printf("elements of stack\n");
    
        for(i=0; i <= top; i++)
        {
            printf("stack values %d: %d \n", i, stack[i]);
        }
        printf(" ");
        return;
    }
}

int main()
{   

   /* 
    printf("Entered elements to push in stack: \n");
    scanf("%d", &i);
   */

    push(5);
    push(6);
    push(4);
    push(3);
    push(1);

    pull(5);
    pull(6);

   
    //push(6);


    return 0;
}
