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
// first observe no of rows then check columns then try to make out a formula
// 1
// 2 1
// 3 2 1
// 4 3 2 1
// shuruwaat row number se ho rhi hai agar dekh paa rhe ho toh
using namespace std;
int main()
{
    cout << "pattern 10" << endl;
    int n;
    std::cout << "enter the value of n : " << std::endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int a = i;
        for (int j = 1; j <= i; j++)
        {
            cout << a;
            a -= 1;
        }
        std::cout << " " << std::endl;
    }

    return 0;
}
