#include<iostream>
using namespace std;
int main(){
    int r,s,a;
    cin>>r>>s>>a;
    if(r<s){
        if(r<a){
            cout<<"Ram is youngest";
        }else{
            cout<<"Ajay is youngest";
        }
    } else{
        if(s<a){
            cout<<"Shyam is youngest";
        }
        else{
            cout<<"Ajay is youngest";
        }
    }
}