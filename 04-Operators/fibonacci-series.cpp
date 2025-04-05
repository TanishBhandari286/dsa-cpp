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
int main()
{
    {
        cout << "fibonacci series" << endl;
        int n = 10;

        int a = 0;
        int b = 1;
        cout << a << "\t";
        cout << b << "\t";
        for (int i = 1; i <= n; i++)
        {
            int next = a + b;
            cout << next << "\t";
            a = b;
            b = next;
        }
        return 0;
    }
}
