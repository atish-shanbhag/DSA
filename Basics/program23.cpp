#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    switch(ch){
    case 'm':
        cout<<"Its Monday";
        break;
    case 't':
        cout<<"It's Tuesday";
        break;
    default :
        cout<<"No days";
        break;
    }
}