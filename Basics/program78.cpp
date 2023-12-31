#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int arr[] = {1, 5, 6, 3, 2};
    int n = sizeof(arr) / 4;
    int mx = arr[0];
    for (int i = 1; i < n; i++)
    {
       mx = max(mx,arr[i]); // or if(arr[i]>mx) mx=arr[i]
    }
    cout<<mx;
}
//maximum element in array