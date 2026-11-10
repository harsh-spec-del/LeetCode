class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> answer;
        int n=boxes.length();
        for(int i=0;i<n;i++){
            int am=0;
            for(int j=0;j<n;j++){
                if(boxes[j]=='1'){
                am+=abs(i-j);
                }else{
                    continue;
                }
            }
            answer.push_back(am);
        }
        return answer;
    }
};