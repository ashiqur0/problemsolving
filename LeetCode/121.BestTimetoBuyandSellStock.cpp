#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    int buying_price = prices[0];
    int max_profit = 0;
    for(int i=0; i<prices.size(); i++) {
        if(buying_price  > prices[i]) {
            buying_price  = prices[i];
        } else {
            int profit = prices[i] - buying_price ;
            max_profit = max(profit, max_profit);
        }
    }
    return max_profit;
}

int main() {

    vector<int> prices = {7, 1, 5, 3, 6, 4}; //5
    // vector<int> prices = {7, 6, 4, 3, 1}; //0
    // vector<int> prices = {2, 4, 1}; //2
    cout << maxProfit(prices) << endl;

    return 0;
}