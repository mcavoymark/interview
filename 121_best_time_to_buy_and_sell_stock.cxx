class Solution {
public:
    //time limit exceeded
    /*int maxProfit(vector<int>& prices) {
        int profit = 0;
        for(auto i=prices.begin(); i!=prices.end()-1; ++i) {
            for(auto j=i; ++j!=prices.end(); ) {
                if(*j-*i > profit) profit=*j-*i;
            }
        }
        return profit;
    }*/

    int maxProfit(vector<int>& prices) {
        if(prices.size()<2) return 0;
        int profit=0, buy=prices[0];
        for(auto i=++prices.begin(); i!=prices.end(); ++i) {
            if(*i>buy)
                profit = std::max(profit,*i-buy);
            else
                buy = *i;
        }
        return profit;
    }
};
