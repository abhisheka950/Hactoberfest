#include <stdio.h>
#include <math.h>

void main(){
    int ni,m,rem,sum,k;
    scanf("%d",&ni);
    for (m=1;m<=ni;m++){
        sum=0;
        k=m;
        while(k>0){
            rem=k%10;
            sum+=pow(rem,3);
            k=k/10;}
        
        if(m==sum){
            printf("%d \n",sum);
            }
        }      
}
