#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int o = n;
    int r =0;
    while(n>0){
        int ld = n%10;
        r = r*10 + ld;
        n /= 10;
    }
    cout<<o<<r;
    int sum = o + r;
    cout<<sum;
}
