class Solution {
public:
    int minPartitions(string n) {
        int maxi=0,temp;
        for(int i=0;i<n.length();i++){
            temp=n[i]-'0';
            if(temp>maxi){
                maxi=temp;
            }else{
                continue;
            }
        }
        return maxi;
    }
};