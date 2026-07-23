class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int bestbuy[100000];
        bestbuy[0]=prices[0];
        for(int i=1;i<n;i++)
        {
            bestbuy[i]=min(bestbuy[i-1],prices[i]);
        }
        int profit=0;
        for(int i=0;i<n;i++)
        {
            int currpro=prices[i]-bestbuy[i];
            profit=max(profit,currpro);
        }
        return profit;
    }
};