#include <stdio.h>
#include <string.h>
#include <math.h>

void main(){
    int n,rem,i=0,sum=0;
    char new[50]="";
    char rem2[50];
    
    scanf("%d",&n);
    
    //converting to base 10:
    while (n!=0){
        rem=n%10;
        sum+=rem*pow(2,i);
        i+=1;
        n=n/10;         
     }
    int sum2=sum;

    //converting from base 10;
    while(sum!=0){
        rem=sum%8;
        
        sprintf(rem2,"%d",rem);

        strcat(rem2,new);
        strcpy(new,rem2);

        sum=sum/8;
    }
    printf("decimal:%d",sum2);
    printf("\noctal:%s",new);
}