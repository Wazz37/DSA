class Solution {
public:
    bool isPalindrome(int x) {
        long num = 0;
        int n = x;
        int modulo;

        if (x<0)
            return false;

        while (n!=0){
            modulo = n%10;
            num = num*10 + modulo;

            n = n/10;
        }

        if (num==x){
            return true;
        }

        return false;
        
    }
};