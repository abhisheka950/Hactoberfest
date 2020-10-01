#include <stdio.h>
#include <math.h>
void main(){
    int n,m,k,rem,i,fact,sum;
    scanf("%d",&m);
    for(n=1;n<=m;n++){
    k=n;
    sum=0;
    while(k!=0){
        
        rem=k%10;
        fact=1;
        for(i=1;i<=rem;i++){
            fact=fact*i;
        }
        sum=sum+fact;
        k=k/10;
    }if(sum==n){
        printf("%d\n",n);
    }}
}