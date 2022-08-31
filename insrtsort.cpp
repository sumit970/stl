#include<iostream>
using namespace std;

void insertsort(int arr[],int n)
{
    int temp,j;
    for(int i=1;i<=n;i++){
         temp=arr[i];
         j=i-1;

        while(j>=0 && arr[j]>temp){

            arr[j+1]=arr[j];
            j--;
            
        }
        arr[j+1]=temp;
    }
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
int n=10;
int arr[n]={5,64,6,3,65,56,8,7,54,2};
insertsort(arr,n);
}
