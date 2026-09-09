class Solution {
public:
    int subtractProductAndSum(int n) {
       int product = 1;
       int sum = 0;
       for(; n>0 ; n=n/10){
        int digit = n%10;
        product = product * digit;
        sum = sum + digit;
       }
        return product - sum;
    }
};