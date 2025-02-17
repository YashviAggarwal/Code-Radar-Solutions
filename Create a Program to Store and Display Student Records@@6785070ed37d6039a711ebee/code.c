#include <stdio.h>
int main(){
    int n,a;
    char b[100];
    float c;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d%s%c",&a,&b,&c);
    }
    printf("'Roll Number: %d, Name: %99s, Marks: %.2f'",a,b,c);
    return 0;

}