class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> mp;
        int count=0;
        mp[0]=1;
        int sum=0;
        for(int r=0;r<n;r++)
        {
            sum+=nums[r];
            int target=sum-k;
            if(mp.find(target)!=mp.end())
            {
                count+=mp[target];
            }
            mp[sum]++;

        }
        return count;
    }
};