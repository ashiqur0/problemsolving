// LeetCode: 121. Best Time to Buy and Sell Stock
// Learning: Dynamic Programming
// Description: Given array of integer. Find the maximum profit

#include <bits/stdc++.h>
using namespace std;

//Advanced skills: Dynamic Programming
//Fundamental skills: Array
int maxProfit(vector<int>& prices) {
    // initialize buy price = first value and profit = 0
    int buy = prices[0];
    int profit = 0;
    for(int i=0; i<prices.size(); i++) {
        // update the price if it is less than previouslybuy price
        if(prices[i] < buy) {
            buy = prices[i];
        } else if(profit < prices[i] - buy){
            // update the profit if it is lower thancurrent profit
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