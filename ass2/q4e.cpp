#include <iostream>
using namespace std;
void f(string &a, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 65 && a[i] <= 90)
        {
            a[i] = a[i] + 32;
        }
    }
}
int main()
{
    string a;
    cin >> a;
    int n = a.size();
    f(a, n);
    cout<<a;
    return 0;
}