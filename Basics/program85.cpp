#include<iostream>
using namespace std;
int main(){
    int a[] = {1,2,3,4,5};
    int i=0;
    int n = sizeof(a)/4;
    int j = n-1;
    while(i<j){
        // if (a[i] != a[j]) {
        //     return false;
        // }
        // int temp = a[i];
        // a[i] = a[j];
        // a[j] = temp;
        swap(a[i], a[j]);
        i++; j--;
    }
    for(int i=0;i<n;i++){
     cout<<a[i]<<" ";
    }
}

// reverse of a array  