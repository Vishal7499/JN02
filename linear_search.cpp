#include <iostream>
using namespace std;

int linearSearch(int arr[],int key,int size){
    
    for(int i=0;i<size;i++){
        if(key==arr[i]){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={1,3,5,7,9,8,6,4,2};
     int key=7;
    int index=linearSearch(arr,key,9);
    cout<<index;
    return 0;

}




