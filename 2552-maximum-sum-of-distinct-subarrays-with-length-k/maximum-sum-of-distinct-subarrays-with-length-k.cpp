class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long ans=0;
        int l=0;
        unordered_map<int,int> mp;
        long long windowsum=0;

        for(int i=0;i<k;i++)
        {   mp[nums[i]]++;
            windowsum+=nums[i];
        }

        if(mp.size()==k)
        ans=windowsum;


        for(int r=k;r<nums.size();r++)
        {
         
          mp[nums[r]]++;
           windowsum+=nums[r];

           mp[nums[r-k]]--;
           if(mp[nums[r-k]]==0)
           mp.erase(nums[r-k]);

           windowsum-=nums[r-k];

           if(mp.size()==k)
          ans=max(ans,windowsum);
         
        
        }
        return ans;
    }
};