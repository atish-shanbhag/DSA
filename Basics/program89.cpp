#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a[2][3] = {{1,9,5}, {2,7,3}};
    int mx = INT_FAST8_MIN;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            mx = max(mx,a[i][j]);
        }
    }
    cout<<mx;
}

// max element in array