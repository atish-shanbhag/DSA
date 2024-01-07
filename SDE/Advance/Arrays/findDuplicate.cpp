#include<iostream>
using namespace std;
int findDuplicate(vector<int> &arr){
    int ans = 0;
    for(int i=0;i<arr.size();i++){//XOR all array elements
        ans = ans^arr[i];
    }
    for(int i=1;i<arr.size();i++){//XOR all array elements from 1
        ans = ans^i;
    }
    return ans;
}