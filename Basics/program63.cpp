#include <iostream>
using namespace std;
void swap(int& x, int& y) // pass by value  //int& x, int& y pass by reference
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
int main()
{
    int x = 5;
    int y = 2;
    int temp;
    cout << x << " " << y << endl;
    swap(x, y);
    cout << x << " " << y << endl;
}