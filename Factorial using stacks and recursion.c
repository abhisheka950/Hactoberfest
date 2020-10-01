#include<stdio.h>
#define MAX 100
int top=-1,stack[MAX],ans=1;
void push(int n)
{if(top<n)
    {
        stack[++top]=n-top;
        push(n);
    }
}
int pop(int top)
{   ans=ans*stack[top];
    top--;
    if(top>-1)
    {pop(top);}
    return ans;
}
int main()
{
    int n,i,j;
    printf("Enter the number:");
    scanf("%d",&n);
    push(n);
    printf("The factorial of %d is %d",n,pop(top-1));
}
