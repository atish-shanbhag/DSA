#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    for (int i = 0; i <= 4; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i <= 4; i++)
    {
        cout << arr[i] << " ";
    }
    arr[0] = 100;
    cout<<endl;
    for (int i = 0; i <= 4; i++)
    {
        cout << arr[i] << " ";
    }
}
// array basics