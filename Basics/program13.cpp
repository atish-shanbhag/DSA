#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n<0){
        cout<<"Kindly provide positive integer";
    }
    else if(n>99 && n<999){
        cout<<"Three digit number";
    }else{
        cout<<"Not a three digit number";
    }
}