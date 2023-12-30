#include<iostream>
using namespace std;
void print(int x, int n){
    if(x>n) return;
    cout<<x<<endl;
    print(x+1,n);
}
int main(){
    int n;
    cin>>n;
    print(1,n);
}

//1 to n with extra parameter