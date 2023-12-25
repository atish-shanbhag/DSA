#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if ((a > b) && (a > c))
    {
        cout << "A is greater";
    }
    else if ((b > a) && (b > c))
    {
        cout << "b is greater";
    }
    else
    {
        cout << "c is greater";
    }
}