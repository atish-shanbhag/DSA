#include<iostream>
using namespace std;
int main(){
    int arr[8]= {1,1,0,0,0,0,1,0};
    int n = sizeof(arr)/4;
    for(int i=0;i<n;i++){
        for(int j=n-1;j>=0;j--){
            if(i>=j){
                break;
            }
            if(arr[i] == 0){
                i++;
            } else if(arr[i] == 1 || arr[j] == 0 ){
                swap(arr[i], arr[j]);
                i++;
                j--;
            } else{
                j++;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

// int left = 0, right = n-1
// while (left<right){}