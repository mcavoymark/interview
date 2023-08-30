class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0, buy=prices[0], sell=prices[0];
        for(auto i=prices.begin();++i<prices.end();){
            if(*i>=sell) { //update sell price
                sell = *i;
            } else { //sell
                profit += sell - buy;
                buy = sell = *i;
            }
        }
        if(sell>buy) profit += sell - buy;
        return profit;
    }
};
