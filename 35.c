#include <stdio.h>
#include <math.h>
void main(){
    int n,count=0;
    scanf("%d",&n);
    int a=1,b,c=0;
    while(count<=n){
        count+=1;
        a=b;
        b=c;
        c=a+b;
        printf("%d  ",c);
    }
}