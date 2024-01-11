class Solution {
public:
long long int binarySearch(int n){
    long long int s=0, e=n;
    long long int mid = s+(e-s)/2;
    long long int ans = -1;
    while(s<=e){
        if(mid*mid == n){
            return mid;
        }else if(mid*mid > n){
            e = mid -1;
        }else if(mid*mid < n){
            ans = mid;
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
    int mySqrt(int x) {
         return binarySearch(x);
    }
};


// Input: x = 4
// Output: 2
// Explanation: The square root of 4 is 2, so we return 2.