#include <iostream>
using namespace std;
int stockbuyandsell(int arr[10],int n)
{
    int minoutof = arr[0];
    int maxprofit = 0;
    int profit;
    for (int i = 1; i < n; i++)
    {
        minoutof = min(minoutof , arr[i]);
        profit = arr[i] - minoutof;
        maxprofit = max(maxprofit, profit);
    }
    return maxprofit;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n=10;
    int res = stockbuyandsell(arr,n);
    cout << res << endl;
}