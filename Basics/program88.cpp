#include<iostream>
using namespace std;
int main(){
    int a[2][3] = {{9,0,4},{1,2,7}};
    int b[2][3] = {{2,5,1},{9,6,4}};
    int c[2][3];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            c[i][j] = a[i][j] + b[i][j];
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
}
// adding 2 arrays