class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        {
            return false;
        }
        int number = x; 
        long long result = 0;
        int rem = 0;
        while(number!=0)
        {
            rem = number%10;
            number = number/10;
            result = (result*10)+rem;
        }
        if(result == x)
        {
            return true;
        }
        return false;
    }
};