#include <stdio.h>
void main(){
    int ni,i,sum=0;
    scanf("%d",&ni);
    for(i=1;i<ni;i++){
        if(ni%i==0){
            sum=sum+i;
        }
    }if(ni==sum){
        printf("perfect no");
    }
    else{
        printf("not a perfect no");
    }
}
