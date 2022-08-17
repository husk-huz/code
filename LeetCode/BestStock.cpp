#include <iostream>
#include <vector>

using namespace std;

class Solution 
{
public:
    int maxProfit(vector<int>& prices)
    {
        vector<int> increase_price;
        for(int i=0; i<int(prices.size()-1); i++)
        {
            increase_price.push_back(prices[i+1]-prices[i]);
        }
        int max_profit = 0;
        int counter = 0;
        for(int i=0; i<int(increase_price.size()); i++)
        {
            counter += increase_price[i];
            if(counter > max_profit)
            {
                max_profit = counter;
            }
            if(counter < 0)
            {
                counter = 0;
            }
        }
        return max_profit;
    }
};

int main()
{
    // vector<int> target = {7,1,5,3,6,4};
    // vector<int> target = {7,6,4,3,1};
    // vector<int> target = {1, 2};
    // vector<int> target = {2,1,4,5,2,9,7};
    vector<int> target = {2,1,2,1,0,1,2};
    Solution s;
    cout << s.maxProfit(target) << endl;

    return 0;
}