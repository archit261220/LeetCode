class Solution {
public:
    int reverseDegree(string s) {
        int ans=0;
        int count=1;
       for(int i =0; i<s.size();i++) {

        int val=('z'-s[i]+1)*count;
        ans=ans+val;
        count++;
       }
       return ans;
    }
};