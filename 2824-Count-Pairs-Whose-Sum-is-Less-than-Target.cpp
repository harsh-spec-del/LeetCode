class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int count=0,tar;
     for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            tar=nums[i]+nums[j];
            if(tar<target){
                count++;
            }
        }
     }  
     return count; 
    }
};