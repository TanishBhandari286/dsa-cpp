#include <iostream>
#include <vector>
using namespace std;
bool LinearSearch(int arr[], int n, int target)
{
    bool flag = false;
    int i;
    for (i = 0; i <= n - 1; i++)
    {
        if (arr[i] == target)
        {
            flag = true;
        }
    }
    return flag;
}
int LS(int arr[], int n, int target)
{
    int index;
    int i;
    for (i = 0; i <= n - 1; i++)
    {
        if (arr[i] == target)
        {
            index = i;
        }
    }
    return index;
}
int main()
{
    int arr[10] = {5, 10, 1, 0, 3, 4, 5, 6, 7, -2};
    // kya ismein 1 hai ye dhundke batao mereko?
    int n = 10;
    int target = 1;
    cout << LinearSearch(arr, n, target) << endl;
    cout << LS(arr, n, target);

    return 0;
}
