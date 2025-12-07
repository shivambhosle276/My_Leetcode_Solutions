class Solution {
public:
    int divide(int dividend, int divisor) {

        if (dividend == divisor) return 1;

        bool sign = true;
        if ((dividend >= 0 && divisor < 0) || (dividend <= 0 && divisor > 0))
            sign = false;

        long n = llabs((long long)dividend);   
        long d = llabs((long long)divisor);    

        long ans = 0;

        while (n >= d) {
            int cnt = 0;

 
            while (n >= (d << (cnt + 1))) {
                cnt++;
            }

            ans += (1L << cnt);
            n -= (d << cnt);
        }


        long limit = (1LL << 31);

        if (ans == limit) {
            return sign ? INT_MAX : INT_MIN;
        }

        return sign ? ans : -ans;
    }
};
