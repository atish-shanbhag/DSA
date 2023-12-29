#include<iostream>
using namespace std;
int fact(int x){
    int f = 1;
    for(int i=1;i<=x;i++){
        f*=i;
    }
    return f;
}
int main(){
    int n,r;
    cin>>n>>r;
    int a = fact(n);
    int b = fact(n-r);
    cout<<a/b;
}

//Permutation