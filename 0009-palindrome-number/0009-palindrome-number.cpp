class Solution {
public:
    bool isPalindrome(int x) {
        int digit;
        long long revNum = 0;
        int duplicate = x;
        while(x > 0){
            digit = x % 10;
            revNum = (revNum*10) + digit;
            x = x/10;
        }
        if(duplicate == revNum){
            return true;
        }
        return false;
    }

};