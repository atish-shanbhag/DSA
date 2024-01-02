#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int arr[] = {1, 5, 6, 3, 2};
    int n = sizeof(arr) / 4;
    int mn = INT_FAST8_MAX;
    for (int i = 1; i < n; i++)
    {
       mn = min(mn,arr[i]); // or if(arr[i]<mn) mn=arr[i]
    }
    cout<<mn;
}
//minimum element in array