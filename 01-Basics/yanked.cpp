#include <iostream>
using namespace std;

int main()
{
    for (int a = 0, b = 1, c = 2; a >= 0 && b >= 1 && c >= 2; a--, b--, c--)

    {
        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
        if ((a++ == 0 && ++b > 0) && (++c == 3 || --b == 0))
        {
            cout << "value of a b c are :" << a << "\t" << b << "\t" << c
                 << "\t" << endl;
            if (a == 1)
            {
                cout << a << endl;
                c = 0;
            }
            cout << "b ki value :" << b << endl;
        }
        if ((a + b) * c == 0 || (b-- < 0 && ++c == 2))
        {
            cout << "ENd" << a << b << c << "\t";
            break;
        }
        {
            cout << "X" << a << b << c << " ";
        }
    }
}
