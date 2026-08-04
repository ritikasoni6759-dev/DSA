class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int l=0;
        int r=n-1;
        int a=0;
        while(l<r)
        {
            int h=min(height[l],height[r]);
            int w=r-l;
            int area=h*w;
            a=max(area,a);

            if(height[l]<height[r])
            l++;

            else
            r--;
        }
        return a;
    }
};