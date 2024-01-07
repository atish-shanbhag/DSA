// 7
// 2 3 1 6 3 6 2
// Sample Output 1: 1 here 1 is unique

#include<iostream>
using namespace std;
int main(){
    int arr[7] = {2,3,1,6,3,6,2};
    int size = sizeof(arr)/4;
    int ans = 0;
    for(int i=0;i<size;i++){
        ans ^= arr[i];
    }
    cout<<ans<< " ";
}

// Approach

// Put xor operation same number will be marked remaining will be the answer