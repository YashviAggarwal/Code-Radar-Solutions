#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int space=1;space<=n-i;space++){
            printf(" ");
        }
        for(int j=i;j>=1;j--){
            printf("%d ",j);
        }

        printf("\n");
    }
    return 0;
}