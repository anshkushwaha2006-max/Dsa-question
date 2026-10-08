class Solution {
public:

    int binarysearch(int n) {
        int s = 0;
        int e = n;
        int ans = -1;

        while (s <= e) {

            int mid = s + (e - s) / 2;

            long long square = 1LL * mid * mid;

            if (square == n) {
                return mid;
            }
            else if (square < n) {
                ans = mid;
                s = mid + 1;
            }
            else {
                e = mid - 1;
            }
        }

        return ans;
    }

    int mySqrt(int x) {
        return binarysearch(x);
    }
};