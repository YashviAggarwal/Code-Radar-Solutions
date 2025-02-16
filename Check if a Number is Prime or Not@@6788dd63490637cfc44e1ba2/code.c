#include <stdio.h>
int main(){
    int n;
    int count=0;
    scanf("%d",&n);
    if(n<2){
        printf("Not Prime");
    }
    for(i==2;i<=n;i++){
        if(n%i==0){
            count++;

        }
    }
    if(count==0){
        printf("Prime");
    }
    else{
        printf("Not prime");
    }
    return 0;
}