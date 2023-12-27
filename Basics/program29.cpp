#include <iostream>
using namespace std;
int main()
{
    // int f = 1;
    int n;
    cin >> n;
    for (int i = 2; i<=n/2; i++)
    {
        if (n % i == 0)
        {
            cout << "composite" << endl;
            break;
        }
    }
}
// Composite 
