#include<stdio.h>
int lo,mid,up;
void binary(int *p,int e)
{   mid=(lo+up)/2;
    if(e>*(p+mid))
        {lo=mid+1;
        binary(p,e);}
    else if(e==*(p+mid))
        {printf("The element %d is present at %d position in sorted array.",e,mid+1);}
    else
        {up=mid-1;
        binary(p,e);}
}
int main()
{
    int n,i,j,e;
    printf("Enter total element in array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {scanf("%d",&a[i]);}
    for(i=0;i<n;i++)
    {for(j=i+1;j<n;j++)
        {a[i]=a[i]+a[j]-(a[j]=a[i]);}
    }
    printf("Enter the element to search:");
    scanf("%d",&e);
    lo=0,up=n-1;
    binary(a,e);
}
