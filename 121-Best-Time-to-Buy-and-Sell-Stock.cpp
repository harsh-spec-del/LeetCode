class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m = 0, n = prices.size();
        int mini = prices[0];
        for(int i = 0;i < n;i++){
            m = max(m, prices[i]-mini);
            mini = min(mini, prices[i]);
        }
        return m;
    }
};