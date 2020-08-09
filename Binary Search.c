#include<stdio.h>
int binarySearch(int arr[], int key){
    int start=0;
    int end=10;
    int mid;
    int found=0;
    mid=(start+end)/2;
    while(found!=1){
        if(arr[mid]==key){
            found==1;
            return mid;
            break;
        }
        else if(arr[mid]>key){
            end=mid;
            mid=(start+end)/2;
        }
        else if((mid==0 || mid==end-1) && found!=1){
            found=1;
            return -1;
            break;
        }
        else{
            start=mid;
            mid=(start+end)/2;
        }

    }
}
int main(){
    int arr[10]={2,5,8,15,17,17,20,23,34,38};
    int index;
    int key=7;
    index=binarySearch(arr,key);
    if(index==-1){
        printf("Not Found");
    }
    else{
        printf("%d ",index);
    }
}
