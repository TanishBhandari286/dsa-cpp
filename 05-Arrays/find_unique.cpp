// Problem Statement
// You have been given an integer array/list(ARR) of size N. Where N is equal to
// [2M + 1] matlab odd hai.
//  Now, in the given array/list, 'M' numbers are present twice and one number
//  is present only once. You need to find and return that number which is
//  unique in the array/list. Unique element is always present in the array/list
//  according to the given
// condition
// Input Format :
//  The first line contains an Integer 't' which denotes the number of test
//  cases or queries to be run. Then the test cases follow. First line of each
//  test case or query contains an integer 'N' representing the size of the
//  array/list. Ques4 - Arra 44 Second line contains 'N' single space separated
//  integers representing the elements in the array/list.. Hint use XOR gate
#include <iostream>

using namespace std;
int find_unique(int *arr, int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int arr[] = {2, 3, 4, 2, 3, 4, 5};
    int size = 7;
    cout << find_unique(arr, size);
}
