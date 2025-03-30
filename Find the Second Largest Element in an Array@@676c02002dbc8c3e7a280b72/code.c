#include <stdio.h>
int main(){
    int n,arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int largest=-1,secondlargest=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            secondlargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>secondlargest && arr[i]!=largest){
            secondlargest=arr[i];
        }
    printf("-1");
    }
    printf("%d",secondlargest);
    return 0;
}