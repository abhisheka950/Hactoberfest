#include <stdio.h>
#include <math.h>

void main(){
    int ni,i,j,count,x;
    scanf("%d",&ni);
    for(i=2;i<=ni/2;i++){
        if(ni%i==0){
            count=0;
            x=pow(i,0.5);
            for(j=2;j<=x;j++){
                if(i%j==0){
                    break;
                }
                else{
                    count+=1;
                }
            }if(count==x-1){
                printf("%d\n",i);
            }
        }
    }
}
