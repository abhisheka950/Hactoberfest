#include <stdio.h>
#include <math.h>
void main(){
    int n,sum=0,rem;
    scanf("%d",&n);
    int k=n;
    while(n!=0){
        rem=n%10;
        sum=sum+pow(rem,3);
        n=n/10;
    }if (sum==k){
        printf("arm number");
    }
    else{
        printf("not an arm number");
    }
}
