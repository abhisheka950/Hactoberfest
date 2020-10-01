#include <stdio.h>
void main(){
    int i,j,t,inc;
    int n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        t=i;
        inc=n-1;
        for(j=1;j<=i;j++){
            printf("%d ",t);
            t=t+inc;
            inc-=1;
        }printf("\n");
    }
}