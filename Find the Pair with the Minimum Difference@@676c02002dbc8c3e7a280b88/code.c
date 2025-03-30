#include <stdio.h>
int main(){
    int n,arr[100],swapped;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(n<2){
        printf("-1");
    }
    for(int i=0;i<n-1;i++){
        swapped=0;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swapped=1;
            }
        }
        if(swapped==0) break;
    }
    printf("%d %d",arr[0],arr[1]);
    return 0;
}