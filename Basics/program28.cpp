#include <iostream>
using namespace std;
int main()
{
    int f = 1;
    int n;
    cin >> n;
    for (int i = n/2; i>=1; i--)
    {
        if (n % i == 0)
        {
            f = i;
            break;
        }
    }
    cout << f << endl;
}
// Factorial 
// Solution
// for (int i = n/2; i>=1; i--) reverse for loop since n we have to exclude we start from n/2
