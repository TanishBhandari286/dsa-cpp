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
//
// 1 1 1
// 2 2 2
// 3 3 3
using namespace std;
int main()
{
    cout << "pattern 2" << endl;
    int n;
    cin >> n;

    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << a;
        }
        std::cout << " " << std::endl;
        a += 1;
    }
    return 0;
}
