#include <bits/stdc++.h>

using namespace std;
void insertion_sort(int arr[], int n)
{
    for(int i=0;i<=n-1;i++){
        int j = i;
        while(j>0 && arr[j-1] > arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}
int main()
{
    int arr[] = {6,5,4,3,2,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertion_sort(arr, n);
     for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}


// Time Complexity 
// worst O(n2)

// Optimal  for(int i=0;i<=n-1;i++){ O(n)