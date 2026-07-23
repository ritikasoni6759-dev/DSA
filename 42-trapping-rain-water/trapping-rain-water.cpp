class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int leftmax[100000];
        int rightmax[100000];
        leftmax[0] = height[0];
        rightmax[n - 1] = height[n - 1];

        for (int i = 1; i < n; i++)
            leftmax[i] = max(leftmax[i - 1], height[i]);

        for (int i = n - 2; i >= 0; i--)
            rightmax [i]= max(rightmax[i + 1], height[i]);

        int watertrapped = 0;
        for (int i = 0; i < n; i++) {
            int curr = min(leftmax[i], rightmax[i]) - height[i];
            if (curr > 0)
                watertrapped +=curr;

        }
        return watertrapped;
    }
};