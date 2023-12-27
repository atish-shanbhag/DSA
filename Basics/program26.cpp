#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=4;i<=3*n+1;i+=3){
        cout<<i<<" ";
    }
}
//AP 4,7,10,13..........
// AP = a + (n-1)d;
// 4 + n-1 * 3
// 4 + 3n -3
// 3n + 3
// 3(n+1)