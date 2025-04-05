#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>
using namespace std;
void arrinput(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        cout << "Enter the " << i << "element :";
        cin >> arr[i];
    }
}

void arrPrint(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        cout << "printing " << i << "element of array" << endl;
        cout << arr[i];
    }
}
int getMax(int arr[], int n)
{
    int maximum = INT_MIN;
    for (int i = 0; i <= n - 1; i++)
    {
        maximum = max(maximum, arr[i]);
        // if (arr[i] > max)
        // {
        //     max = arr[i];
        // }
    }
    return maximum;
}
int getMin(int arr[], int n)
{
    int mini = INT_MAX;
    for (int i = 0; i <= n - 1; i++)
    {
        min(mini, arr[i]);
        // if (arr[i] < min)
        // {
        //     min = arr[i];
        // }
    }
    return mini;
}
int main()
{
    int arr[] = {1, 4, 1, 23, 5, 7};
    int n = sizeof(arr) / sizeof(int);

    cout << getMax(arr, n) << endl;
    cout << getMin(arr, n);

    return 0;
}
