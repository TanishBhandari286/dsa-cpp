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
// *
// * *
// * * *
using namespace std;
int main()
{
    cout << "pattern 6" << endl;
    int n;
    std::cout << "enter the value of n : " << std::endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        std::cout << " " << std::endl;
    }
    return 0;
}
