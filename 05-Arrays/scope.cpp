#include <iostream>
#include <vector>
using namespace std;

void update(int arr[], int n) {}
void print(int arr[], int n)
{
    // updating array's first element
    arr[0] = 120;
    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << "\t";
    }
}
int main()
{
    int arr[3] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(int);
    update(arr, 3);
    print(arr, 3);
    //  here it is getting updated as arrays are by default passed by reference
    //  as the base adress is passed
    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << "\t";
    }
    return 0;
}
