#include <iostream>
#include <vector>
using namespace std;
void reverseArray(int arr[], int n)
{
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = 6;

    cout << "before reversed" << endl;
    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << " " << endl;
    reverseArray(arr, n);

    cout << "after reversing " << endl;
    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << "\t";
    }

    return 0;
}
