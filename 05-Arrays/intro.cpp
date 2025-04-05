#include <iostream>
#include <vector>
using namespace std;
void printArray(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << "\t";
    }
}
int main()
{
    // similar kind of items
    // contiguous memory allocation
    // index access
    // 10000  values ka variable thodi banaoge
    // multiple value stored in one variable
    // implementation>?>
    // arr has values and reference to the 0th index also
    // int number[15];
    // // accessign the array through index
    // cout << number[0];
    // cout << "Sab badiya";
    // cout << number[20];
    // // initializing an array
    // //
    // int second[3] = {1, 2, 3};
    // cout << second[2];
    // // how to print the array
    // //
    // int n = 3;
    // cout << "printing the arrar" << endl;
    // for (int i = 0; i <= n; i++)
    // {
    //     cout << second[i] << " ";
    // }
    //
    int n = 8;
    int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 8};
    printArray(num, n);

    char ch[] = {'a', 'r', 'c', 't', 't'};
    return 0;
}
