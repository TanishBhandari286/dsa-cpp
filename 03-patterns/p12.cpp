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
// D
// C D
// B C D
// A B C D
//    row aur column analyze karo solution niklega
int main()
{
    int n;
    std::cout << "Enter ur input for n" << std::endl;
    cin >> n;
    cout << "p8" << endl;
    int i = 0;
    for (i = 1; i <= n; i++)
    {
        char ch = 'A' + n - i;
        for (int j = 1; j <= i; j++)
        {
            cout << ch;
            ch += 1;
        }
        std::cout << " " << std::endl;
    }
    return 0;
}
