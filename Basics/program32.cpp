#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum = 0;
    while(n>0){
        int ld = n%10;
        n = n/10;
        sum = sum + ld;
    }
    cout<<sum;
}
// SUm of digit
//1234 = 1+2+3+4