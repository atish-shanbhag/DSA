#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3};
    int n = sizeof(arr)/4;
    int product = 1;
    for (int i = 0; i < n; i++)
    {
        product *= arr[i];
    }
    cout << product << " ";
}

// product of array