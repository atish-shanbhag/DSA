#include <iostream>
using namespace std;
int main()
{
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
// Composite number

// number which has more than 2 divisors
// 4 has 1,2 and 4
