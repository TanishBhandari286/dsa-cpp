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
// 2 3
// 4 5 6
using namespace std;
int main()
{
    cout << "pattern 8" << endl;
    int n;
    std::cout << "enter the value of n : " << std::endl;
    cin >> n;
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << a;
            a += 1;
        }
        std::cout << " " << std::endl;
    }
    return 0;
}
