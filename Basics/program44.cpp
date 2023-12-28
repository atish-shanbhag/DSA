#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<(char)(j+64)<<" ";
        }
        cout<<endl;
    }
}

// 4
// A
// A B
// A B C
// A B C D
