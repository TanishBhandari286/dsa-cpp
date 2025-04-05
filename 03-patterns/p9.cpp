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
// 2 1
// 3 2 1
// 4 3 2 1
//   row aur column analyze karo solution niklega
//   cpi ke bina try kar solve krne ka (i-j+1)
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
            cpi -= 1;
        }
        std::cout << " " << std::endl;
    }
    return 0;
}
