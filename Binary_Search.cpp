#include<iostream>
using namespace std;

int BinarySearch(int arr[],int key,int size){
    int start=0;
    
    int end=size-1;
    int target=key;
    int mid;

    while(start<=end){
        mid=(start+end)/2;
    
    if(arr[mid]==target){
        return mid;
    }
    if(arr[mid]<target){
        start=mid+1;
    }
    else{
        end=mid-1;
    }
    
    }
    return -1;



}
int main(){
    int arr[]={1,2,3,4,5,6,7,9};
    int key=31;
    int index=-1;
    index=BinarySearch(arr,key,8);
    cout<<index;
}