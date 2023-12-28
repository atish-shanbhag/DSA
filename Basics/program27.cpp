#include<iostream>
using namespace std;
int main(){
    int a = 1;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        a = a*2;
    }
} // Gometric Progression

//GP = a1*r^(n-1)