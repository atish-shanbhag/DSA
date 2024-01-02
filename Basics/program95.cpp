#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int x = 12345678;
    string s = to_string(x); // integer to string

    string s = "12345678";
    int y = stoi(s); //string to integer
    cout<<y<<" ";
}