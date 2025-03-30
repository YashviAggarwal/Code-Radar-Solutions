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
    int min_diff = arr[1] - arr[0];
    int p1,p2;
    for(int i=0;i<n-1;i++){
        if(arr[i+1]-arr[i]<min_diff){
            min_diff=arr[i+1]-arr[i];
             p1=arr[i];
             p2=arr[i+1];
        }
    }
    printf("%d %d",p1,p2);
    return 0;
}