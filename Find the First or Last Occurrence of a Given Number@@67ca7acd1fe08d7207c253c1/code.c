#include <stdio.h>
int findOccurrence(int array[],int num,int key,char m ){
    if(m='F'){
        for(int i=0;i<num;i++){
            if(array[i]==key){
                return 1;
            }
            else{
                return -1;
            }

        }
    }
    if(m=='L'){
        for(int i=num;i>0;i--){
            if(array[i]==key){
                return 1;
            }
            else{
                return -1;
            }
        }
    }


}

