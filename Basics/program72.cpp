#include<iostream>
using namespace std;
int fibo(int n){
    if(n==1 || n==2) return 1;
    return fibo(n-1) + fibo(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<fibo(n);
}

// fibonacci series

// 1 1 2 3 5 8 13 21
//   1+2 =3, 2+3=5