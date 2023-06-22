class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min1=prices[0];
        int profit=0;
        int max1=0;
        for(int i=1;i<prices.size();i++)
        {
            min1=min(min1,prices[i]);
            profit=prices[i]-min1;
            max1=max(max1,profit);
        }
        return max1;
    }
};