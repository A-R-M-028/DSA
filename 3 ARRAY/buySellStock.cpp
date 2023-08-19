// C++ code for the above approach
#include <iostream>
using namespace std;

int maxProfit(int prices[], int n)
{
    int buy=prices[0];int profit=0;
    for (int i = 1; i < n; i++)
    {
        if(prices[i]<buy){
            buy=prices[i];
        }
        //this is the catch
        else if(prices[i]-buy>profit){
            profit=prices[i]-buy;
        }
    }
    return profit;
    
}

// Driver Code
int main()
{
	int prices[] = { 7, 1, 5, 6, 4 };
	int n = sizeof(prices) / sizeof(prices[0]);
	int max_profit = maxProfit(prices, n);
	cout << max_profit << endl;
	return 0;
}
