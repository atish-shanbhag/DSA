#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            cout<<"* "<<"";
        }
        cout<<endl;
    }
}

// n=4
// i=1 j=1,2,3,4
// i=2 j=1,2,3
// i=3 j=1,2
// i=4 j=4

// i+jmax = n+1
// jmax = n+1-i
// 4 = 5-1=4

// 4
// * * * *
// * * *
// * *
// *