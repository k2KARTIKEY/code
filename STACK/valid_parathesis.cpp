#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (int i = 0; i < s.size(); i++) {
            // Opening brackets
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            } 
            else {
                // If stack is empty → invalid
                if (st.empty()) {
                    return false;
                }

                // Matching logic
                if (s[i] == ')') {
                    if (st.top() != '(') return false;
                    st.pop();
                }
                else if (s[i] == ']') {
                    if (st.top() != '[') return false;
                    st.pop();
                }
                else { // '}'
                    if (st.top() != '{') return false;
                    st.pop();
                }
            }
        }

        // If stack is empty → valid
        return st.empty();
    }
};

int main() {
    Solution obj;

    string s;
    cout << "Enter string: ";
    cin >> s;

    if (obj.isValid(s)) {
        cout << "Valid Parentheses" << endl;
    } else {
        cout << "Invalid Parentheses" << endl;
    }

    return 0;
}