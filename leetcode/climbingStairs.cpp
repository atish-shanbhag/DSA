class Solution {
public:
    int climbStairs(int n) {
        if(n<2) return 1;
        int first = 1;
        int second = 1;
        int third = 0;
        for(int i=2;i<=n;i++){
            third = first + second;
            first = second;
            second = third; 
        }
        return third;
    }
};
