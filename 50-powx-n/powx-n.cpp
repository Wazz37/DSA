class Solution {
public:
    double myPow(double x, long n) {
        double result = 0;
        if (n==0) return 1;
        bool isNeg = false;
        if (n>0){
            isNeg = false;
        }
        else{
            n = abs(n);
            isNeg = true;
        }
        
        if (n%2==0){
            result =  myPow(x*x, n/2);
        }
        else{
            result =  x * myPow(x*x, n/2);
        }
        

        if (isNeg) return 1/result;
        return result;
    }
};