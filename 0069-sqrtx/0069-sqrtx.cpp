class Solution {
public:
    int mySqrt(int x) {
        if (x < 2){
            return x;
        }

        int st = 0, end = x/2;
        while (st <= end){
            int mid = st + (end - st)/2;
            long long s = (long long)mid * mid;

            if (s == x){
                return mid;
            }
            else if (s < x){
                st = mid + 1;
            }
            else{
                end = mid -1;
            }
        }
        return end ;
    }
};