#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    int buy = prices[0];
    int profit = 0;
    for(int i=0; i<prices.size(); i++) {
        if(prices[i] < buy) {
            buy = prices[i];
        } else if(profit < prices[i] - buy){
            profit = prices[i] - buy;
        }
    }
    return profit;
}

int main() {

    vector<int> prices = {7, 1, 5, 3, 6, 4}; //5
    // vector<int> prices = {7, 6, 4, 3, 1}; //0
    // vector<int> prices = {2, 4, 1}; //2
    cout << maxProfit(prices) << endl;

    return 0;
}