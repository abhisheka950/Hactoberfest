#include <stdio.h>
void main(){
    int i,i1,j,k=7;
    for(i=1;i<=9;i++){
        i1=i;
        if(i>5){
            i1=10-i1;
        }
        for(j=1;j<i1;j++){
            printf(" ");}

        printf("%d",i1);

        for(j=1;j<=k;j++){
            printf(" ");
        }
        if(i1!=5){
        printf("%d",i1);}
        printf("\n");
        
        if(i<5)
        k=k-2;
        else
        k=k+2;
    }
}