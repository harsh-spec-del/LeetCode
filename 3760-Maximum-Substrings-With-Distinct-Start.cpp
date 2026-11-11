class Solution {
public:
    int maxDistinct(string s) {
        int temp,count=0;
        int arr[26]={0};
        for(int i=0;i<s.length();i++){
            temp=s[i]-'a';
            arr[temp]++;
        }
        for(int i=0;i<26;i++){
            if(arr[i]>0){
                count++;
            }else{
                continue;
            }
        }
        return count;
    }
};