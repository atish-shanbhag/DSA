class Solution {
public:
    int reverse(int x) {
       long long reversed = 0; 

        while (x != 0) {
            reversed = reversed * 10 + x % 10;
            x /= 10;
        }

        if (reversed < std::numeric_limits<int>::min() || reversed > std::numeric_limits<int>::max()) {
            return 0;
        }

        return static_cast<int>(reversed);
    }
};