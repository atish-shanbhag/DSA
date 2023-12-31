class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        if(s[0] == '}' || s[0]==']' || s[0]== ')') return false;

        for(int i=0;i<s.length();i++){
            if(s.length() == 0) return true;

            if(s[i] == '(' || s[i]=='{' || s[i] == '[') 
            st.push(s[i]);
            else if (st.empty() && (s[i] == ')' || s[i]=='}' || s[i] == ']')) return false;
            else {
                if(st.top() == '{' && s[i] == '}') st.pop();
                else if(st.top() == '[' && s[i] == ']') st.pop();
               else if(st.top() == '(' && s[i] == ')') st.pop();
               else return false; 
            }
            }
            if(!st.empty ()) return false;
            return true;
    }
};