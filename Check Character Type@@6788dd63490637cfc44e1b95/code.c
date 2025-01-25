#include <stdio.h>
int main(){
    char xyz;
    scanf("%c",&xyz);
    if(xyz=='a' || xyz=='e' || xyz=='i' || xyz=='o' || xyz=='u' || xyz=='A' || xyz=='E' || xyz=='I' || xyz=='O' || xyz=='U'){
        printf("Vowel");
    }
    else if(xyz>=a && xyz<=z || xyz>=A && xyz<=Z){
        printf("Consonant");
    }
    else if(xyz>=0 && xyz<=9){
        printf("Digit");
    }
    else{
        printf("Special Cgaracter");
    }
    return 0;

}