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
//         *
//       *  *
//    *  *  *
// *  *  *  *
//
//    row aur column analyze karo solution niklega
int main()
{
    int n;
    cin >> n;

    for (int row = 1; row <= n; row++)
    {
        for (int space = 0; space < n - row; space++)
        {
            cout << " ";
        }
        for (int col = 1; col <= row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
