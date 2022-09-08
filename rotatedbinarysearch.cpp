
#include <iostream>
using namespace std;


int binarySearch(int arr[], int low,int high,int mid,int K){

    while(low<high){
        if(K<arr[mid]) high=arr[mid];
        if(K>arr[high]) low=arr[high];
        if(K==arr[mid]) return mid;
    }
    return -1;
}

int searchInrotated(int arr[], int N, int K)
{

    // Your code here
    int pivot = 0;
    // ,low=0,high=N-1;
    for(int i=1; i<N; i++)
    {
        if(arr[i]<arr[i-1]) pivot=arr[i-1];
        break;
    }
    int low=0,high=N-1,mid=(low+high)/2;

    if(K>arr[low]&& K<pivot) return  binarySearch(arr,low,pivot,mid,K);
    if(K<arr[high]&& K>pivot) return binarySearch(arr,pivot,high,mid,K);


}

int main()
{

    int N = 20;
    int K = 5;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    searchInrotated(arr, N, K);
    cout << searchInrotated(arr, N, K) << endl;
    

}