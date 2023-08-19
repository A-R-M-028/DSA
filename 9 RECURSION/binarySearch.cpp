#include <iostream>
using namespace std;
#include <limits.h>
// same strategy for min also
int findKey(int arr[], int s, int e, int &k)
{
    int m = s + (e - s) / 2;
    // base condition
    if (s > e)
        return -1;
    // prodess
    if (arr[m] == k)
        return m;
    // recurrence relation
    if (arr[m] < k)
    {
        // go right side
        findKey(arr, m + 1, e, k);
    }
    else // go left
         findKey(arr, s, m - 1, k);
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);
    int start = 0;
    int end = size - 1;
    int key = 3;
    int ans = findKey(arr, start, end, key);
    cout << ans;
    return 0;
}
