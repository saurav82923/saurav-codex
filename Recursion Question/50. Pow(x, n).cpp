class Solution {
public:

    double myPow(double x, int n) {
       if (n < 0)
        {
            return 1.0 / (myPow(x, -(n + 1)) * x);
        }
        if (n == 0)
        {
            return 1.0;
        }
        if (n == 1)
        {
            return x;
        }
        double r = myPow(x, n / 2);
        if (n % 2)
        {
            return r * r * x;
        }
        return r * r;
    }
};