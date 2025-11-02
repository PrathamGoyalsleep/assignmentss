#include <iostream>
using namespace std;
void f(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            count++;
        }
    }

    cout << (n - count);
}

int main()
{
    int n;
    cin>> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    f(arr, n);
    return 0;
}