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
// 1
// 2  2
// 3  3  3
// 4  4  4  4
//  row aur column analyze karo solution niklega
int main()
{
    int n;
    std::cout << "Enter ur input for n" << std::endl;
    cin >> n;
    cout << "p6" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << "\t";
        }
        std::cout << " " << std::endl;
    }
    return 0;
}
