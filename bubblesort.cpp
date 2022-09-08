#include <iostream>
using namespace std;

void shortbubble(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {

        for (int j = 1; j < n; j++)
        {

            if (arr[j] < arr[j - 1])
            {

                swap(arr[j], arr[j - 1]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int n = 10;
    int arr[] = {1, 2, 5, 8, 4, 9, 7, 3, 6, 10};
    shortbubble(arr, n);
}