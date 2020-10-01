#include <stdio.h>
#include <string.h>

void main(){
    int n;
    scanf("%d",&n);

    int arr[50],arr2[50];
    arr[0]=1;
    arr[1]=1;
    printf("1");
    printf("\n1 1\n");

    int i,j;
    for(i=2;i<n;i++){
        arr2[0]=1;
        printf("1 ");
        for(j=1;j<i;j++){
            arr2[j]=arr[j-1]+arr[j];
            printf("%d ",arr2[j]);
        }
        arr2[i]=1;
        memcpy(arr,arr2,50);
        printf("1\n");
    }
}