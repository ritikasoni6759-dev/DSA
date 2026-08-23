class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n=nums.size();
        int globalmax=INT_MIN;
        int currmax=0;
        int globalmin=INT_MAX;
        int currmin=0;
        for(int i=0;i<n;i++)
        {
            currmax=max(currmax+nums[i],nums[i]);
            globalmax=max(globalmax,currmax);
            currmin=min(currmin+nums[i],nums[i]);
            globalmin=min(globalmin,currmin);
        }
        return max(abs(globalmax),abs(globalmin));
    }
};