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
// A A A
// B B B
// C C C
//   row aur column analyze karo solution niklega
//   cpi ke bina try kar solve krne ka ('A'+1-1)
int main()
{
    int n;
    std::cout << "Enter ur input for n" << std::endl;
    cin >> n;
    cout << "p8" << endl;
    int i = 0;
    char ch = 'A';
    for (i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << ch << "\t";
        }
        std::cout << " " << std::endl;
        ch += 1;
    }
    return 0;
}
