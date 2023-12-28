#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<(char)(j+96)<<" ";
            // cout<<(char)(i+64)<<" ";
        }
        cout<<endl;
    }
}

// 4
// A B C D
// A B C D
// A B C D
// A B C D

// 4
// A A A A
// B B B B
// C C C C
// D D D D