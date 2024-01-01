#include<iostream>
using namespace std;
int main(){
    int a[5] = {1,2,3,4,5};
    int b[5]; 
    int n = sizeof(a)/4;
    for(int i=0;i<n;i++){
        b[i] = a[n-1-i];
        cout<<b[i]<<" ";
    }
}

//copying a[5] to b[5] in reverse order formula n-1-i