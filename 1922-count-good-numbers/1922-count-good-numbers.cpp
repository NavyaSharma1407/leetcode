class Solution {
public:
    long long MOD = 1e9 + 7;
    long long pow(long long x , long long n){
        if(n == 0) return 1;
        if(n == 1) return x % MOD;
        if(n % 2 == 0) return pow((x*x)%MOD , n/2);
        return (x * pow(x , n-1)) % MOD;
    }
    int countGoodNumbers(long long n) {
        long long evenChoices = (n % 2 == 0) ? n/2 : (n/2) + 1;
        long long oddChoices = n/2;
        return (pow(4,oddChoices) * pow(5,evenChoices)) % MOD ;
    }
};