#include <iostream>
using namespace std;
int shrink(int arr[], int start, int end, int k)
{
    // Base case
    if (start > end)
    {
        return 0;
    }

    // Keep track of the total number of elements in the resultant array
    int result = 0;

    /* Case 1: The first element, arr[start], does not form a triplet */

    // Skip the first element, and recur for the next element
    result = 1 + shrink(arr, start + 1, end, k); // +1 since `start` is included

    /* Case 2: The first element, arr[start], forms a triplet with some
            `arr[i]` and `arr[j]` */

    // Consider all triplets, and check if they can be removed from the array
    for (int i = start + 1; i < end; i++)
    {
        for (int j = i + 1; j <= end; j++)
        {
            /* Process current triplet: (arr[start], arr[i], arr[j]) */

            // If the difference between elements of the current triplet is `k`
            if (arr[i] == arr[start] + k && arr[j] == arr[i] + k)
            {
                // Recursively check if all elements between `start` & `i` and
                // between `i` & `j` can be removed
                if (!shrink(arr, start + 1, i - 1, k) && !shrink(arr, i + 1, j - 1, k))
                {
                    // Recur for the next element, and update the result
                    int n = shrink(arr, j + 1, end, k);
                    if (result > n)
                    {
                        result = n;
                    }
                }
            }
        }
    }

    // Return number of elements in the resultant array
    return result;
}

int main()
{
    int arr[] = {-1, 2, 5, 8, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    cout << shrink(arr, 0, n - 1, k);
    
}
