#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%3 == 0 || n%5 == 0){ // && and || operator
        cout<<"Divisible";
    }else
        cout<<"Not divisible";
} 