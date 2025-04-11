#include <stdio.h>
int main(){
    int n,arr[100],k,found=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            printf("%d",i);
            found=1;
            break;
        }
    }
    if(!found){
        printf("-1");
   
    }
    return 0;



}