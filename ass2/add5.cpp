#include <iostream>
using namespace std;

void f(int arr[], int n)
{
    int i = 0;
    while (i < n)
    {
        if (arr[i] == 2)
        {
            // shift elements to the right
            for (int j = n - 1; j > i; j--)
            {
                arr[j] = arr[j - 1];
            }
            // insert duplicate 2 at next position
            if (i + 1 < n)
                arr[i + 1] = 2;

            i += 2; // skip the newly inserted duplicate
        }
        else
        {
            i++;
        }
    }

    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
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
