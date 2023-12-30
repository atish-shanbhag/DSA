#include <iostream>
using namespace std;
void swap(int* a, int* b) // pointers // pass by reference
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x = 5;
    int y = 2;
    int temp;
    cout << x << " " << y << endl;
    swap(&x, &y); // Sending address of x and y
    cout << x << " " << y << endl;
}