#include <iostream>
using namespace std;

int main()
{
    for (int a = 0, b = 1, c = 2; a >= 0 && b >= 1 && c >= 2; a--, b--, c--)
    {
        cout << a;
        cout << b;
        cout << c;
        if ((a++ == 0 && ++b > 0) || (++c == 3 && --b == 0))
        {
            cout << "X" << a << b << c << " ";
        }
        else if ((b++ < c-- && a-- == -1) || (++a == 0 && --c == 1))
        {
            cout << "Y" << a << b << c << " ";
        }
        else
        {
            cout << "Z" << a << b << c << " ";
        }

        if ((a + b) * c == 0 || (b-- < 0 && ++c == 2))
        {
            cout << "End" << a << b << c << "\n";
            break;
        }
    }
    return 0;
}
