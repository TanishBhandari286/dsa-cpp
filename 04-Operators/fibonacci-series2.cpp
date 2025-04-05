#include <iostream>
#include <vector>
using namespace std;
int fiboiterative(int n)
{
    int a = 0;
    int b = 1;
    int answer;
    cout << a << " " << b << endl;
    for (int i = 2; i <= n; i++)
    {
        answer = a + b;
        a = b;
        b = answer;
    }
    return answer;
}
int main()
{
    int n;
    cout << "enter n : " << endl;
    cin >> n;
    int val = fiboiterative(n);
    cout << val;
    return 0;
}
