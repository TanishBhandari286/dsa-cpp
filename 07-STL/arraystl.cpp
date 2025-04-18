#include <iostream>
#include <vector>
#include <array>
using namespace std;

int main() {
    int arrns[4] = {1, 2, 3, 4};
    array<int, 4> arrs = {1, 2, 3, 4};  // it is static so not sed widely

    // at , empty , front , back
    // TODO bhai ye krlena yaad se
    vector<int> tanish;
    cout << tanish.capacity() << endl;
    tanish.push_back(1);
    tanish.push_back(1);
    tanish.push_back(1);
    tanish.push_back(1);
    cout << tanish.capacity() << endl;
    return 0;
}
