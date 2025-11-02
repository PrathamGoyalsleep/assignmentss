#include <bits/stdc++.h>
using namespace std;

void f(string &a, string &b, int n, int x)
{
    int count = 0;
    int j = 0;
    if (n != x)
    {
        cout << "false";
        return;
    }
    else {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if (a == b)
    {
        cout << "true";
    }
    else
        cout << "false";
}
}

int main()
{
    string a;
    string b;
    cin >> a;
    int n = a.size();
    cin >> b;
    int x = b.size();
    f(a, b, n, x);

    return 0;
}