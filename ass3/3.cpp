#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            st.push(s[i]);
        }
        else
        {
            if (st.empty()) {
                cout << "false"; 
            exit(0);
        }
            else
            {
                char ch = s[i];
                if ((st.top() == '(' && ch == ')') || (st.top() == '{' && ch == '}') || (st.top() == '[' && ch == ']')) {
                    st.pop();
                }
            }
        }
    }
if (st.empty()) {
    cout<<"true";
}
else cout<<"false";


    return 0;
}