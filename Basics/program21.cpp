#include<iostream>
using namespace std;
int main(){
    int x; int y;
    cin>>x>>y;
    if(x==0 && y==0){
        cout<<"Origin";
    } else if(x>=1 and y>=1){
        cout<<"1st quadrant";
    } else if(x<=-1 and y>=1){
        cout<<"2nd Quadrant";
    } else if(x<=-1 and y<=-1){
        cout<<"3nd Quadrant";
    } else{
        cout<<"4th Quadrant";
    }
}