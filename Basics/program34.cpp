#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int r = 0;
    while(n>0){
        int ld = n%10;
        r *= 10;
        r += ld;
        n /= 10;
    }
    cout<<r;
}
// reverse of a number

//Explaination

// 12345

// r=0;
// ld = 12345%10 = 5
// r=0*10;
// r=0+5;
// n=12345/10=1234;

// 2nd iternation

// ld = 1234%10 = 4
// r=5*10
// r=50+4=54;
// n=1234/10=123 and so on...