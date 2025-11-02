#include <iostream>
using namespace std;
void f(string &a, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 65 || a[i] == 69 || a[i] == 73 || a[i] == 79 || a[i] == 85 || a[i] == 97 || a[i] == 101 || a[i] == 105 || a[i] == 111 || a[i] == 117)
        {
            for (int j = i; j < n; j++)
            {
                a[j] = a[j + 1];
            }
            n--;
        }
    }
}
int main()
{
    string a;
    cin >> a;
    int n = a.size();
    f(a, n);
    cout << a;
    return 0;
}