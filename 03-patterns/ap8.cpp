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
// 2 3
// 3 4 5
// 4 5 6 7
//   row aur column analyze karo solution niklega
//   cpi ke bina try kar solve krne ka
int main()
{
    int n;
    std::cout << "Enter ur input for n" << std::endl;
    cin >> n;
    cout << "p8" << endl;
    int i = 0;
    for (i = 1; i <= n; i++)
    {
        int cpi = i;

        for (int j = 1; j <= i; j++)
        {
            cout << cpi << "\t";
            cpi += 1;
        }
        std::cout << " " << std::endl;
    }
    return 0;
}
