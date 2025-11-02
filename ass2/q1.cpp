#include <iostream>
using namespace std;
int binarysearch(int arr[], int n, int k, int low, int high)
{
    int mid = low + (high - low) / 2; 
    if (low<=high) {
    if (arr[mid] == k)
        return mid;
    if (k > arr[mid])
    {
        low = mid + 1;
    }
    else if (k < arr[mid])
    {
        high = mid - 1;
    }

    binarysearch(arr, n, k, low, high);
}
}
int main()
{
    // only for sorted array;
    int n, k;
    cin >> n;
    int arr[n];
    cin >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<binarysearch(arr, n, k, 0, n - 1);
}