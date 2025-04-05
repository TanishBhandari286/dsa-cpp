#include <iostream>
#include <utility>
#include <vector>
using namespace std;
void altswap(int arr[], int n)
{
    for (int i = 0; i <= n; i += 2)
    {
        if (i + 1 <= n)
        {
            swap(arr[i + 1], arr[i]);
        }
    }
}

int main()
{
    int arr[] = {1, 3, 2, 7, 11, 8};
    int n = 5;
    cout << "before func call" << endl;
    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << "\t";
    }
    altswap(arr, n);
    cout << "after func call" << endl;
    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << "\t";
    }

    return 0;
}
