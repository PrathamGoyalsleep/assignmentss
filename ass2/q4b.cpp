#include <iostream>
using namespace std;
void reverse(string &a, int x, int i)
{
    if (i >= (x / 2))
    {
        return ;
    }
    int temp = a[i];
    a[i] = a[x - 1 - i];
    a[x - 1 - i] = temp; // swap

    reverse(a, x, i + 1);
   
}

int main()
{
    string a;
    cin >> a;
    int x = a.size();
    reverse(a, x, 0);
cout<<a;
    return 0;
}