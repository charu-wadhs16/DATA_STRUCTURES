#include<stdio.h>
# define max 10
int push(int stack[],int top)
{
    int n;
    if(top==max-1)
    {
      printf("\n Stack is full")  ;
    }
    else
    {
        top++;
        printf("\n Enter a number ");
        scanf("%d",&n);
        stack[top]=n;
    }
    return top;
}
int pop(int stack[],int top)
{

    if(top==-1)
    {
      printf("\n Stack is empty")  ;
    }
    else
    {
        printf(" %d",stack[top]);
        top--;
    }
    return top;
}
void display(int stack[],int top)
{
    int i;
    if(top==-1)
    {
        printf("\n Stack is empty");
    }
    else
    {


    for(i=top;i>=0;i--)
    {
        printf(" %d",stack[i]);
    }
    }
}
void peek(int stack[],int top)
{

    if(top==-1)
    {
     printf("\n Stack is empty") ;
    }
    else
    {
        printf(" %d",stack[top]);
    }
}
void main()
{
    int stack[max],top=-1,ch;
    do
    {
        printf("\n Enter 1 for push \n Enter 2 for pop \n Enter 3 for display \n Enter 4 for peek\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: top=push(stack,top);
            break;
            case 2: top=pop(stack,top);
            break;
            case 3: display(stack,top);
            break;
            case 4: peek(stack,top);
            break;
            default: printf("Invalid");
        }
    }
    while(ch>=1&&ch<=4);


}
