class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> v1;
        vector<int> v2;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0){
                v1.push_back(nums[i]);
            }else{
                v2.push_back(nums[i]);
            }
        }
        int j=0;
        for(int i=0;i<nums.size();i+=2){
            nums[i]=v1[j];
            nums[i+1]=v2[j];   
            j++; 
        }
        return nums;
    }
};