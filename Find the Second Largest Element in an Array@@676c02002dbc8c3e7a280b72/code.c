#include <stdio.h>
#include <limits.h>
int main(){
    int n,arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int largest=INT_MIN,secondlargest=INT_MIN;
    if(n<2){
        printf("-1");
        return 0;
    }
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            secondlargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>secondlargest && arr[i]!=largest){
            secondlargest=arr[i];
        }

    }
    printf("%d",secondlargest>INT_MIN?secondlargest:-1);
    return 0;
}