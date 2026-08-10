class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
       vector<pair<int,int>> vec;
       int n=nums.size();
       int l=0,r=n-1;
       for(int i=0;i<n;i++)
       {
        vec.push_back({nums[i],i});
       }
       sort(vec.begin(),vec.end());

       
     int sum=0;
       while(l<r)
       {
        
        sum=vec[l].first+vec[r].first;
        if(sum==target){
        return {vec[l].second,vec[r].second};
        
        }

        else if(sum>target)
        r--;

        else
        l++;

       } 
       return { };
    }
};