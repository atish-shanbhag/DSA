#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    bool flag = true; // prime
    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = false; // composite
            break;
        }
    }
    if(n==1){
        cout<<"Neither prime nor composite";
    }
    else if (flag == true)
        cout << "Prime";
    else
        cout << "composite";
}