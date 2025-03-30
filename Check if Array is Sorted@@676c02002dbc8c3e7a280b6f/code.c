#include <stdio.h>
int main(){
    int n,arr[],swapped;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        swapped=0;
        for(int j=0;j<=n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swapped=1;
            }
        }
    }
    if(swapped==0){
        printf("Not Sorted");
    }
    else{
        printf("Sorted");
    }
    return 0;
}