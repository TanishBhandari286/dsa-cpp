#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    x = x++;
    x = x + 10;
    cout << x << endl;

    x += 1;
    cout << x << endl;
    return 0;
}
