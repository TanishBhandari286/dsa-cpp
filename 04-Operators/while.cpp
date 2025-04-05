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
int productandsum(int n)
{
    int product = 1;
    int sum = 0;
    do
    {
        int digit = n % 10;
        product = product * digit;
        sum = sum + digit;

        n = n / 10;

    } while (n != 0);
    return product - sum;
}
int main()
{
    {
        int n;
        cin >> n;
        int y = productandsum(n);
        cout << y << endl;
    }
}
