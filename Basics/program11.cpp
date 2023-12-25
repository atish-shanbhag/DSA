#include<iostream>
using namespace std;
int main(){
    int sp; int cp;
    cin>>cp>>sp;
    if(sp<cp){
        cout<<"Loss: "<<sp-cp;
    }else if(sp>cp){
        cout<<"Profit"<<sp-cp;
    }else
    cout<<"No profit No loss";
}