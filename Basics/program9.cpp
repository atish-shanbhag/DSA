#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // if(n%2 == 0){
    //     cout<<"Even number";
    // }else
    //     cout<<"Odd number";
    for (int i = 1; i <= n; i += 2)
    {
        if (i % 2 == 0)
            continue;
        cout << i <<" ";
    }
}
// continue skip even number print odd number itself