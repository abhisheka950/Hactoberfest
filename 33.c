#include <stdio.h>
#include <math.h>
void main(){
    int n,k,rem,i,fact,sum;
    scanf("%d",&n);
    k=n;
    sum=0;
    while(n!=0){
        
        rem=n%10;
        fact=1;
        for(i=1;i<=rem;i++){
            fact=fact*i;
        }
        sum=sum+fact;
        n=n/10;
    }if(sum==k){
        printf("strong number");
    }else{
        printf("not a strong number");
    }
}