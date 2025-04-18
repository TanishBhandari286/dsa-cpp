#include <iostream>
#include <vector>
using namespace std;
// TODO make a snippet of array input
int main() {
    int row;
    int col;
    int taniarr[3][2];
    cout << "enter elements in array" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> taniarr[i][j];
        }
    }
    cout << " elements in array" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << taniarr[i][j] << "\t";
        }
    }
    return 0;
}
