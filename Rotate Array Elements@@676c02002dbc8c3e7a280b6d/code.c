#include <stdio.h>
int main(){
    int n,arr[100],k;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    k=k%n;
    while(k--){
        int last=arr[n-1];
        for(int i=n-1;i>0;i--){
            arr[i]=arr[i-1];
            arr[0]=last;
        }
    }
for(int i=0;i<n;i++){
    printf("%d\n",arr[i]);
}

}