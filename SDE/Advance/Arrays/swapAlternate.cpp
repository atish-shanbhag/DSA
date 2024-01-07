// [1, 3, 2, 7, 11, 8]

#include<iostream>
using namespace std;
int main(){
    int arr[6] = {1, 3, 2, 7, 11, 8};
    int size = sizeof(arr)/4;
    for(int index=0;index<size;index+=2){
        if(index+1 < size){
            swap(arr[index],arr[index+1]);
        }
    }
     for(int index=0;index<size;index+=1){
        cout<<arr[index]<<" ";
     }
}