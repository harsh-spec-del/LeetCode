class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int n=pref.size();
        int a,b,c;
        vector<int> arr(n);
        arr[0]=pref[0];
        if(n==1) return arr;
        for(int i=1;i<n;i++){
            c=pref[i];
            a=pref[i-1];
            b=c^a;
            arr[i]=b;
        }
        return arr;
    }
};