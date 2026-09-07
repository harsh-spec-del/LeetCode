class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> v;
        int max=*max_element(candies.begin(),candies.end());
        for(int i=0;i<candies.size();i++){
            int num=candies[i]+extraCandies;
            if(num>=max){
                v.push_back(1);
            }else{
                v.push_back(0);
            }
        }
        return v;
    }
};