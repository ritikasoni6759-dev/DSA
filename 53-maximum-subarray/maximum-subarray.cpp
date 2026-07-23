class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=INT_MIN;
        int n=nums.size();
        int curr=0;
        for(int i=0;i<n;i++){
            curr+=nums[i];
            sum=max(sum,curr);
            if(curr<0)
            curr=0;
          

        }
        return sum;
        
    }
};