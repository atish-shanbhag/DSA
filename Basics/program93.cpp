#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "Raghav";
        s.push_back('a'); // append char
        s.pop_back(); // remove
        s.append("is a teacher"); //append
        // s.clear(); //clears the string
        s = s+ "srvrbr";
        reverse(s.begin(),s.end());
    cout<<s<<" ";
}