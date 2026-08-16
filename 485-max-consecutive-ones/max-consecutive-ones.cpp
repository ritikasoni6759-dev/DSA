class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0,countt=0;
        int l=0;
        for(int r=0;r<nums.size();r++)
        {
           if(nums[r]==1)
           count++;
           else
           count=0;

           countt=max(count,countt);
        }
        return countt;
    }
};