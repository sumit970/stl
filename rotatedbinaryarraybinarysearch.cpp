

#include <iostream>
using namespace std;
#include <vector>

int Search(vector<int> vec, int K)
{
    // code here
    //[1,2,4,6,7,5,3,2,1]

    int low = 0;
    int high = vec.size();
    int mid = (low + high) / 2;
    while (low < high)
    {
        if (vec[mid] == K)
        {
            return mid;  
        }
        if (vec[low] < vec[mid])
        {

            if (K <vec[mid]&& K >= vec[low])
            {

                high = mid - 1;
            }
            else{
                low = mid + 1;

            }
        }
        else
        {

            

                if (K <vec[high]&&K >vec[mid])
                {

                    low = mid + 1;
                }
                else{
                    high=mid+1;

                }
            }
        }
        return -1;
    }
    int main()
     {

        int n = 10;
        int arr[n] = {5, 64, 6, 3, 65, 56, 8, 7, 54, 2};
        // Search(arr, n);
        // cout<<Search(arr, n);
    }