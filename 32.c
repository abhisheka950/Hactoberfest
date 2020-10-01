#include <stdio.h>
void main(){
    int n,m,i,sum;
    scanf("%d",&m);
    for(n=1;n<=m;n++){
        sum=0;
    for(i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }if(n==sum){
        printf("%d\n",sum);
    }
}}