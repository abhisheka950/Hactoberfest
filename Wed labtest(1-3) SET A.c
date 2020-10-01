#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define MAX 100
int top=-1,stack[MAX];
void pop()
{top--;}
void push(int i)
{stack[++top]=i;}
void main()
{   int i,c=0;
    FILE *p;
    p=fopen("test.txt","r");
    while((fscanf(p,"%d",&i))!=EOF)
    {   if(i>0)
            {push(i);}
    }
    for(i=0;i<=top;i++)
    {printf("%d ",stack[i]);}
    if((top+1)%2!=0)
    {pop();}
    for(i=0;i<top;i=i+2)
    {
        if(abs(stack[i]-stack[i+1])==1)
        {c++;}
    }
    if(c==(top+1)/2)
    {printf("\nYES");}
    else
    {printf("\nNO");}
}
