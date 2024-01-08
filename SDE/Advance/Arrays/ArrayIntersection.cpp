#include<iostream>
using namespace std;
int main(){
    int arr1[3] = {1,2,3};
    int arr2[3] = {3,2,4};
    int m = sizeof(arr1)/4;
    int n = sizeof(arr2)/4;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
            }
        }
    }
    return 0;
}
// For {1,2,3,3} this wont work

// Approach 2


    // vector<int> ans;
    // for(int i=0;i<m;i++){
    //     int element = arr1[i];
    //     for(int j=0;j<n;j++){
    //         if(element = arr2[j]){
    //             ans.push_back(element);
    //             arr2[j] = INT8_MIN;
    //             break;
    //         }
    //     }
    // }
    // return ans

// Approach 3 - 2 pointer
// int i=0, j=0;
// vector<int> ans;
// while(i<n && j<m){
//     if(arr1[i] == arr2[j]){
//         ans.push_back(arr1[i]);
//         i++;
//         j++;
//     }else if(arr1[i]<arr2[j]){
//         i++;
//     }else{
//         j++;
//     }
// }
//  return ans;