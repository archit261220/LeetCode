class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n =nums.size();
        vector<int>ans;
        sort(nums.begin(),nums.end());
        int end =nums[n-1];
        for(int i=nums[0];i<end;i++){
            bool find =false;
            for(int j=0;j<n;j++){
                if(i==nums[j]){ find=true;break;}
                
            }
            if(!find)ans.push_back(i);
        }
    return ans;
    
    }
};