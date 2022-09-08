#include <iostream>
using namespace std;

int rainwaterproblems(int arr[], int n)
{
    int leftarray[n], leftmax = 0,rightmax=0;
    leftarray[0] = {arr[0]};
    int rightarray[n-1] = {arr[n - 1]};
    int minres = 0;
    int res = 0;
    for (int i = 1; i < n; i++)
    {
        leftmax = max(arr[i], leftarray[i-1]);
        leftarray[i] = leftmax;
        // cout << leftarray[i] << endl;
    }
    for (int j = n - 2; j <= 0; j--)
    {
        rightmax = max(rightarray[j + 1], arr[j]);
        rightarray[j] = rightmax;
        // cout << rightarray[j] << endl;
    } 
    for (int k = 0; k < n - 1; k++)
    {
        minres = min(rightarray[k], leftarray[k]);
        res += minres - arr[k];
    }
    return res;
    
}
int main()
{
    int arr[] = {3,1,2,4,0,1,3,2};
    int n=11;
    int res = rainwaterproblems(arr,n);
    cout << res << endl;
}