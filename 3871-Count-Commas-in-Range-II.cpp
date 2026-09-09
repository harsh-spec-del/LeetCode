class Solution {
public:
    long long countCommas(long long n) {
        if(n < 1000){
            return 0;
        }
        else if(n < 1000000){
            return (n+1-1000);
        }
        else if(n < 1000000000){
            return (n+1-1000000)+(n+1-1000);
        }
        else if(n < 1000000000000){
            return (n+1-1000000000)+(n+1-1000000)+(n+1-1000);
        }
        else if(n < 1000000000000000){
            return (n+1-1000000000000)+(n+1-1000000000)+(n+1-1000000)+(n+1-1000);
        }
        return (n+1-1000000000000)+(n+1-1000000000)+(n+1-1000000)+(n+1-1000)+1;
    }
};