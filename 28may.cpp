#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> prices = {10, 20, 30, 40, 50, 60};
    vector<int> days = {1, 2, 3, 4, 5};

    int i = 0, j = 0;
    int k = prices[i];
    int m = days[i];
    int maxprice = 0;
    for (int p = 0; p < prices.size(); p++)
    {
        if (i < prices.size())
        {
            if (prices[i] < prices[i + 1])
            {
                prices[i] = maxprice;
                i++;
            }
        }
        if(i>prices.size()){
            break;
        }
    }

    return 0;
}