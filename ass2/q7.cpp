#include <iostream>
using namespace std;

void f(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((arr[i] > arr[j]) && (j > i))
            {
                count++;
            }
        }
    }
    cout << count;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    f(arr, n);
    return 0;
}