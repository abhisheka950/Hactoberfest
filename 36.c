#include <stdio.h>
#include <string.h>

void main(){
    
    
    
    int len;
    printf("enter binary length:");
    scanf("%d",&len);

    char one[len+1];
    strcpy(one,"1");
    
    char bina[len+1];
    printf("enter binary number:");
    scanf("%s",&bina);

    int i;
    for (i=0;i<len;i++){
        if(bina[i]=='0'){
            bina[i]='1';
        }
        else{
            bina[i]='0';
        }
    }
    printf("one's complement: %s",bina);

    /*two's complement*/
    int j,rem=1;
    for(j=len-1;j>=0;j--){
        if((bina[j]=='1')&&(rem==1)){
            bina[j]='0';
            rem=1;
        
        if(j==0){
            strcat(one,bina);
            strcpy(bina,one);
            }
            
        }
        else if((bina[j]=='1')&&(rem==0)){
            bina[j]='1';
            rem=0;
        }
        else if((bina[j]=='0')&&(rem==1)){
            bina[j]='1';
            rem=0;
        }
        else if((bina[j]=='0')&&(rem==0)){
            bina[j]='0';
            rem=0;
        }

    }
    printf("two's complement: %s",bina);
}