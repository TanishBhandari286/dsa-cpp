#include <algorithm>
#include <cmath>
#include <cstring>
#include <deque>
#include <functional>
#include <iostream>
#include <queue>
#include <stack>
#include <utility>
#include <vector>
using namespace std;
int main()
{
    int n;
    std::cout << "enter the number of elements in the array" << std::endl;
    cin >> n;
    int oddcount;

    int arr[n];

    std::cout << "enter elements in array" << std::endl;
    for (int i : arr)
    {
        cin >> arr[i];
    }
    std::cout << "imput taken successfully" << std::endl;

    for (int i : arr)
    {
        if (arr[i] % 2 != 0)
        {
            oddcount += 1;
        }
    }
    std::cout << "no of odd digits are " << oddcount << std::endl;
    return 0;
}
