#include <bits/stdc++.h>
using namespace std;

int priority(char x) {
    if (x == '^')
        return 3;
    else if (x == '*' || x == '/')
        return 2;
    else if (x == '+' || x == '-')
        return 1;
    else
        return -1;
}

string f(string &s) {
    string ans = "";
    stack<char> st;
    int n = s.size();

    for (int i = 0; i < n; i++) {
        // If operand, add to result
        if ((s[i] >= 'A' && s[i] <= 'Z') || 
            (s[i] >= 'a' && s[i] <= 'z') || 
            (s[i] >= '0' && s[i] <= '9')) {
            ans += s[i];
        }
        // If opening bracket
        else if (s[i] == '(') {
            st.push(s[i]);
        }
        // If closing bracket
        else if (s[i] == ')') {
            while (!st.empty() && st.top() != '(') {
                ans += st.top();
                st.pop();
            }
            if (!st.empty()) st.pop(); // pop '('
        }
        // Operator
        else {
            while (!st.empty() && priority(s[i]) <= priority(st.top())) {
                ans += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }

    // Pop remaining operators
    while (!st.empty()) {
        ans += st.top();
        st.pop();
    }

    return ans;
}

int main() {
    string s;
    cin >> s;
    cout << f(s) << endl;
    return 0;
}
