#include <stdio.h>
int kthmissing(int num,int ar[],int key){
    int left=0,right=num-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        int missing=ar[mid]-(mid+1);
        if(missing<key){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    
    return left+k;
}