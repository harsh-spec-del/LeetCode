class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n=nums.size();
        long sum=0,sq;
        for(int i=0;i<n;i++){
            
            if(n%(i+1)==0){
                sq=nums[i]*nums[i];
                sum+=sq;
            }
            
        }
        return sum;
    }
};