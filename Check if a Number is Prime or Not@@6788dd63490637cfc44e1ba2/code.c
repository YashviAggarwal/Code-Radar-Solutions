#include <stdio.h>
#include <math.h>
int main(){
    int n;
    int count=0;
    scanf("%d",&n);
    if(n<2){
        printf("Not Prime");
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            count++;
            break;
        }
    }
    if(count==0){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;

}