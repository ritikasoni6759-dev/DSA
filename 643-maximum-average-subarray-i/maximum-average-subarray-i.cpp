class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        double maxsum=0;
       for(int i=0;i<k;i++)
       maxsum+=nums[i];

       double currsum=maxsum;

       for(int j=k;j<n;j++)
       {
        currsum+=nums[j];
        currsum-=nums[j-k];

        maxsum=max(maxsum,currsum);
       }

       return maxsum/k;
    }
};