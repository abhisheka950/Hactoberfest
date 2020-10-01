#include <stdio.h>
void main(){
    int n,i,sum=0;
    scanf("%d",&n);
    for(i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }if(n==sum){
        printf("perf no");
    }
    else{
        printf("not a perf no");
    }
}
