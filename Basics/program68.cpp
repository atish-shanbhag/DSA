#include <iostream>
using namespace std;
void sum(int x, int n)
{
    static int totalSum = 0;
    if (x <= n)
    {
        totalSum += x;
        sum(x + 1, n);
    }
    else
    {
        cout << "Sum of numbers from 1 to " << n << ": " << totalSum << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    sum(1, n);
}
//1 to n sum using recursion function parameterized