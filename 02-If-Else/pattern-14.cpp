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
    cout << "pattern 13" << endl;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << i - 1;
        }
        std::cout << " " << std::endl;
        i = i + 1;
    }
    return 0;
}
