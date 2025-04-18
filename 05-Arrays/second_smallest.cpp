#include <climits>
#include <iostream>
#include <vector>
using namespace std;
int secondSmallest(vector<int>& a) {
    int smallest = a[0];
    int secsmallest = INT_MAX;
    for (int i = 0; i < a.size() - 1; i++) {
        if (a[i] < smallest) {
            secsmallest = smallest;
            smallest = a[i];
        } else if (a[i] != smallest && a[i] < secondSmallest) {
            secsmallest = a[i];
        }
    }
    return secsmallest;
}
int main() {
    vector<int> a = {1, 2, 1, 1, 1};
    cout << secondSmallest(a);

    return 0;
}
