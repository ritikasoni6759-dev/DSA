class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> vec(n);
        vec[0]=1;
        for(int i=1;i<n;i++)
        {   
            vec[i]=vec[i-1]*nums[i-1];
        }
        int prod=1;
        for(int i=n-1;i>=0;i--)
        {
            vec[i]=vec[i]*prod;
            prod*=nums[i];
        }

        return vec;

    }
};