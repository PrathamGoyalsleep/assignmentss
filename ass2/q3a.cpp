#include <iostream>
using namespace std;
void f(int arr[], int n)
{
    int i = 0;
    while (i < n-2)
    {
        if (arr[i] + 1 != arr[i + 1])
        {
            cout << arr[i] + 1;
        }
       else cout<<n;
       break;
        i++;
        
    }
    
}

int main()
{
    int n;
    cin>>n;
    int arr[n-1];
    // sorted array
    for (int i = 0; i < n-1; i++)
    {
        cin >> arr[i];
    }
    f(arr, n-1);
    return 0;
}