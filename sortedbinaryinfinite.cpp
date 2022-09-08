
#include <iostream>
using namespace std;

int searchInSorted(int arr[], int N, int K)
{

    // Your code here
    int low = 0, high = 1;
    while (arr[high] < K)
    {
        low = high;
        high = 2 * high;
    }
    int mid = (low + high) / 2;

    while (low < high)
    {
        if (K == arr[mid])
        {

            return mid;
        }

        if (K < arr[mid])
        {

            high = mid - 1;
        }

        if (K > arr[mid])
        {

            low = mid + 1;
        }
    }
       return mid;
}
int main()
{

    int N = 20;
    int K = 5;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    searchInSorted(arr, N, K);
    cout << searchInSorted(arr, N, K) << endl;
}