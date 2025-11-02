#include <bits/stdc++.h>
using namespace std;
void f(int arr[], int n)
{
    int low = 0, high = n - 1, mid = 0;
    while (mid<=high) {
    if (arr[mid] == 0)
    {
        // swap
        int temp = arr[low];
        arr[low] = arr[mid];
        arr[mid] = temp;
        mid++;
        low++;
    }
    else if (arr[mid] == 1)
    {
        mid++;
    }
    else
    {
        // swap
        int pemp = arr[high];
        arr[high] = arr[mid];
        arr[mid] = pemp;
        high--;
    }
}
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
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