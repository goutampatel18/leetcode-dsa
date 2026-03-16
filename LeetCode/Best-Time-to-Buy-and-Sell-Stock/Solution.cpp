1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4       int max_profit = 0, best_buy= prices[0];
5       for(int i=1; i<prices.size(); i++){
6        if(prices[i]> best_buy){
7            max_profit = max(max_profit, prices[i]-best_buy);
8        }
9
10        best_buy=min(best_buy, prices[i]);
11       }
12       return max_profit;
13    }
14};