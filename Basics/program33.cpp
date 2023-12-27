#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int product =1;
    while(n>0){
        int ld = n%10;
        n = n/10;
        product = product * ld;
    }
    cout<<product;
}
// Product of digit
//1234 = 24