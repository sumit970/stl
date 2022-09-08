
#include <iostream>
using namespace std;

int sortedbinary(int arr[], int N,int left,int right, int K)
{
   int  mid=(left+right)/2;
   if(left>right) return -1;
   if(K==arr[mid]) return mid;


   if(K<arr[mid]) sortedbinary(arr,N,left,mid-1,K);
   if(K>arr[mid]) sortedbinary(arr,N,mid+1,right,K);

}

int main()
{
    int N = 20;
    int K = 5;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int res=sortedbinary(arr,N,0,19,K);
    cout << res << endl;
}