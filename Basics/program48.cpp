#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n + 1 - i; j++)
        {
            // cout << i << " ";
            cout << j << " ";
        }
        cout << endl;
    }
}
// 4
// 1234
// 123
// 12
// 1

// 4
// 1 1 1 1
// 2 2 2
// 3 3
// 4