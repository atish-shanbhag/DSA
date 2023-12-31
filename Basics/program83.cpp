#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int arr[] = {10, 1, 0, 9, 4, 12, 1, 2};
    int n = sizeof(arr) / 4;
    int mx = INT_FAST8_MIN;
    int smx = INT_FAST8_MIN;

    for (int i = 0; i < n; i++)
    {
        mx = max(mx, arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != mx)
        {
            smx = max(smx, arr[i]);
        }
    }
    cout << smx;
}