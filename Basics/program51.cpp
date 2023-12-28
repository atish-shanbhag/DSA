#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=i;j++){
            cout<<a<<" ";
            a+=2;
        }
        cout<<endl;
    }
}


// 4
// 1
// 1 3
// 1 3 5
// 1 3 5 7


//formula
// cout<<2*j-1<<" ";
