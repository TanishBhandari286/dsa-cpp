#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 4;
    int num;
    bool flag = false;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = true;
            }
        }
    }
    if (flag == true)
    {
        cout << "found a duplicate\t" << endl;
    }
    else
    {
        cout << "no duplicate";
    }

    return 0;
}
