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
// D
// C D
// B C D
// A B C D
using namespace std;
int main()
{
    cout << "pattern 10" << endl;
    int n;
    std::cout << "enter the value of n : " << std::endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        char beg = 'A' + n - i;
        for (int j = 1; j <= i; j++)
        {
            cout << beg;
            beg += 1;
        }
        std::cout << " " << std::endl;
    }

    return 0;
}
