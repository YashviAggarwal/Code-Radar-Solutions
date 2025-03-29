#include <stdio.h>
int binarySearch(int array[],int num,int key){
    int low=0,high=num-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(array[mid]==key) return mid;
        else if(array[mid]<key) low=mid+1;
        else high=mid-1;
    }
    return -1;
}