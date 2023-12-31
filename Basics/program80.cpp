#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    int n = sizeof(arr)/4;
    for(int i=0;i<n;i++){
        if(i%2 == 0){
            arr[i]+=10;
        }else{
            arr[i] *= 2;
        }
        cout<<arr[i]<<" ";
    }
}
//for even index i want to add 10 to it if odd then i have to multiply by 2
