#include <iostream>
using namespace std;
void f(string &a, int n)
{
    for (int i = 0; i < (n - 1); i++)
    {
        for (int j = 0; j <= n-2; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    cout<<a;
}
int main()
{
    string a;
    cin >> a;
    int n = a.size();
    f(a, n);
    
    return 0;
}