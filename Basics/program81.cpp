#include <iostream>
using namespace std;
int main()
{
    int arr[8] = {1, 3, 0, 10, 11, 15, 3, 70};
    int n = sizeof(arr) / 4;
    int x = 4;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > x)
        {
            count++;
        }
    }
    cout << count;
}
// greater than x print count