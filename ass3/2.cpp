#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    stack<char> a;
    for (int i = 0; i < s.size(); i++)
    {
        a.push(s[i]);
    }

    while (a.empty() == 0)
    {
        cout << a.top();
        a.pop();
    }

    return 0;
}