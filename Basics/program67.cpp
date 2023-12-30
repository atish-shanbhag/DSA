#include<iostream>
using namespace std;
void print(int n){
    if(n==0) return; // base case
    print(n-1); // call
    cout<<n<<endl; // work
}
int main(){
    print(10);
}

//1 to n without extra parameter