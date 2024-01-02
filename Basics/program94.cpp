#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "Raghav";
        reverse(s.begin(),s.begin()+3); // swap first 3 char
         reverse(s.begin()+1,s.end()-1); // 2to 5 swap
    cout<<s<<" ";
}