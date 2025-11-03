#include<iostream>
#include<vector>
using namespace std;

int stockMarket(vector <int> & prices)
{
    int maxprofit=0;
    int bestbuy=prices[0];
    for(int i=1;i<prices.size();i++)
    {
        if(bestbuy<prices[i])
        {
            maxprofit=max(maxprofit,prices[i]-bestbuy);
        }
        bestbuy=min(bestbuy,prices[i]);
    }
    return maxprofit;
}

int main()
{
    vector<int> prices={2,3,1,6,1,5};
    int stock=stockMarket(prices);
    cout<<stock<<endl;
}