#include <climits>
#include <iostream>
#include <vector>
using namespace std;

bool elementPresent(int arr[3][3], int target) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (target == arr[i][j]) {
                return 1;
            }
        }
    }
    return 0;
}
// problem 2: col wise elements ka sum chahiye
int columnsum(int arr[3][3]) {
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum += arr[i][j];
        }
    }

    return sum;
}
// problem 3: row wise elements ka sum chahiye
int rowsum(int arr[3][3]) {
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum += arr[i][j];
        }
    }

    return sum;
}
// problem 4: larget Row sum
//

int largestrowsum(int arr[3][3]) {
    int maxsum = INT_MIN;
    int rowno = -1;
    for (int i = 0; i < 3; i++) {
        int sum = 0;
        for (int j = 0; j < 3; j++) {
            sum += arr[i][j];
        }
        if (sum > maxsum) {
            maxsum = sum;
            rowno = i;
        }
    }
    cout << "the max value is " << maxsum << endl;

    return rowno;
}
#include <iostream>
using namespace std;

int main() {
    int arr[3][3];
    cout << "enter elements in array" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }
    int ans = columnsum(arr);
    cout << "the sum of columns is " << ans << endl;
    int ans2 = columnsum(arr);
    cout << "the max sum of columns is " << ans2 << endl;

    // int target = 8;
    // if (elementPresent(arr, target)) {
    //     cout << "element found" << endl;
    // } else {
    //     cout << "not found" << endl;
    // }

    return 0;
}
