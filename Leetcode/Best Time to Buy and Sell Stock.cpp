class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int initial=0,profit=0,diff;
        for(int i=1;i<prices.size();++i){
            diff=prices[i]-prices[initial];
            profit=max(diff,profit);
            if(diff<0){
                initial=i;
            }
        }
        return profit;
    }
};
