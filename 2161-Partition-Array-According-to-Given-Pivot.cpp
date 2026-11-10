class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> v1;
        vector<int> v2;
        vector<int> v3;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot){
                v1.push_back(nums[i]);
            }else if(nums[i]==pivot){
                v2.push_back(nums[i]);
            }else{
                v3.push_back(nums[i]);
            }
        }
       for(int i=0;i<v1.size();i++){
            nums[i]=v1[i];
       } 
       int a=v1.size();
       for(int i=0;i<v2.size();i++){
        nums[a]=v2[i];
        a++;
       }
       int b=v1.size()+v2.size();
       for(int i=0;i<v3.size();i++){
        nums[b]=v3[i];
        b++;
       }
       return nums;
    }
};