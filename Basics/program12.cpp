#include<iostream>
using namespace std;
int main(){
    int l; int b;
    cin>>l>>b;
    int area = l*b; //rectangle
    int perimeter = 2*(l+b); 
    if(area>perimeter){
        cout<<"Greater";
    }
    else{
        cout<<"Smaller";
    }
}