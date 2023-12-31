#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 3, 0, 10, 2, 5, 6};
    int n = sizeof(arr) / 4;
    int sumEven = 0;
    int sumOdd = 0;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {

            sumEven += arr[i];
        }
        else
        {
            sumOdd += arr[i];
        }
    }
    cout << sumEven - sumOdd << " ";
}