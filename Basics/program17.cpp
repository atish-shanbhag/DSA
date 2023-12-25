#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if((n%3 == 0) ||(n%5 == 0) && (n%15 != 0)){
        cout<<"Divisible but not by 15";
    }
}