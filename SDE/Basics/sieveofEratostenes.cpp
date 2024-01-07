// Sieve of Eratostenes
#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int n = 48;

    for (int i = 2; i <= n; i++) {
        bool isPrime = true;
        for (int j = 2; j <=sqrt(i); j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << i << " ";
        }
    }

    return 0;
}
//2 3 5 7 11 13 17 19 23 29 31 37 41 43 47