#include <iostream>
using namespace std;
int main()
{
    int c = 1;
    for (int i = 3; i >= 1; i--)
    {
        cout << i << "  ";
        for (int j = 0; j < 4 - i; j++)
        {
            cout << c++ << " ";
        }
        cout << endl;
    }
    return 0;
}
