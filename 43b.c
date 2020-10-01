#include <stdio.h>
void main(){
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<i;j++){
            printf(" ");
        }
        if((i==0)||(i==4)){
            printf("*****\n");
        }
        else{
            printf("*   *\n");
        }
        
    }
}