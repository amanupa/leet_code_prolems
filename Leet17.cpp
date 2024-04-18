/*
50. Pow(x, n)
*/

class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) {
        return 1.0;
    }
    if (n < 0) {
        return 1 / (x * myPow(x, -(n + 1))); 
    }
    if (n % 2 == 0) {
        double temp = myPow(x, n / 2);
        return temp * temp;
    }else {
        return x * myPow(x, n - 1);
    }
        
    }
};