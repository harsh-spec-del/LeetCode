class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            int a=index[i];
            int b=nums[i];
            v.insert(v.begin()+a,b);
        }
        return v;
    }
};