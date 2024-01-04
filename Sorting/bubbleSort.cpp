#include <bits/stdc++.h>

using namespace std;
void bubble_sort(int arr[], int n)
{
    for(int i=n-1;i>=0;i--){
        int didSwap = 0; // Optimization
        for(int j=0;j<=i-1;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                didSwap = 1;
            }
        }
        if(didSwap == 0){
            break;
        } // Optimization
        cout<<"runs\n";
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before selection sort: "
         << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    bubble_sort(arr, n);
    return 0;
}


// Time Complexity

// O(n^2)

// With Optimization
// O(n)