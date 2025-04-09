#include <iostream>
#include <vector>
using namespace std;

int binary_search(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;

    while (start <= end)
    {
        // checking if target is equals to mid
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }

        mid = (start + end) / 2;
    }
    return -1;
}

int main()
{
    int arr[6] = {2, 4, 6, 8, 10, 12};
    int size = 6;
    int target = 19;
    cout << "The position of your target is :"
         << binary_search(arr, size, target) << "\t";

    return 0;
}
