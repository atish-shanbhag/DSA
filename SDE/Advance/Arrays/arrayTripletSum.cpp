#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    int n = sizeof(arr)/4;
    int k = 12;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            for(int h = j + 1; h < n; h++) {
                if(arr[i] + arr[j] + arr[h] == k) {
                    cout << arr[i] << " " << arr[j] << " " << arr[h] << endl;
                }
            }
        }
    }

    return 0;
}