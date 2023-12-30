#include<iostream>
using namespace std;
int raisedPower(int a, int b){
    if(b==0) return 1;
    return a*raisedPower(a,b-1);
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<raisedPower(a,b)<<endl;
}
//power recursion