#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices)
{
    int mini=prices[0];
    int maxi=0;
    for(int i=1;i<prices.size();i++)
    {
         int sum=prices[i]-mini;
        if(sum>=0)
               maxi=max(sum,maxi);
        mini=min(mini,prices[i]);
        
    }
    return maxi;

}