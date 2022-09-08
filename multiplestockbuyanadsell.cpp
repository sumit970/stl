#include <iostream>
using namespace std;

int multiplestockbuyanadsel(int arr[],int n)
{
    // int minar[0]=arr[0];
    
    int profit = 0;
    for (int i = 1; i < n; i++)
    {

        if (arr[i] > arr[i - 1])
        {
            profit += arr[i] - arr[i - 1];
        }
    }
    return profit;
}

int main()
{
    int arr[] = {1, 25, 3, 18, 5, 15, 7, 89, 10};
    int n=9;
    int res = multiplestockbuyanadsel(arr,n);
    cout << res << endl;
}