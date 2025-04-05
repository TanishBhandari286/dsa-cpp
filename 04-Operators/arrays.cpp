#include <algorithm>
#include <cmath>
#include <cstring>
#include <deque>
#include <filesystem>
#include <functional>
#include <iostream>
#include <queue>
#include <stack>
#include <utility>
#include <vector>
using namespace std;
int main()
{
    cout << "arrays input and output" << endl;
    std::cout << "enter the value of n" << std::endl;
    int n;
    cin >> n;
    int arr[n];

    for (int i : arr)
    {
        cin >> arr[i];
    }
    std::cout << "input taken successfully" << std::endl;
    for (int i : arr)
    {
        cerr << arr[i] << "\t";
    }
    std::cout << "printed output" << std::endl;
    return 0;
}
