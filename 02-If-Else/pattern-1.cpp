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
using namespace std;
int main()
{
    cout << "pattern 1" << endl;
    int n;
    cin >> n;
    int i = 0;

    while (i < n)
    {
        int j = 0;
        while (j < n)
        {
            std::cout << "*";
            j += 1;
        }
        std::cout << " " << std::endl;
        i += 1;
    }

    return 0;
}
