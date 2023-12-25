//If they can be sides of a triangle
//Solution : addition of two sides should be greater than third
#include<iostream>
using namespace std;
int main(){
    int x; int y; int z;
    cin>>x>>y>>z;
    if((x+y) > z && (y+z) > x && (x+z) > y){
        cout<<"Sides of a traingle is valid";
    }else
        cout<<"Invalid sides";
}