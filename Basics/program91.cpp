#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int count = 0;
    for(int i=0;i<s.length();i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'i' || s[i] == 'u'){
            count ++;
        }
    }
    cout<<count;
}

// vowels in a string
