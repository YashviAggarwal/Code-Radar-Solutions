#include <stdio.h>
int findOccurrence(int array[],int num,int key,char m ){
    if(m=='F'){
        for(int i=0;i<num;i++){
            if(array[i]==key){
                return i;
            }
            

        }
    }
    else if(m=='L'){
        for(int i=num-1;i>=0;i--){
            if(array[i]==key){
                return i;
            }
            else{
                return -1;
            }
        }
    }


}

