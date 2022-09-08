#include<iostream>
using namespace std;

void shortselection(int arr[],int n){
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        { 
            if(arr[i]>arr[j])
            { 
                swap(arr[i],arr[j]);
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n=10;
    int arr[]={1,2,5,8,4,9,7,3,6,10};
    shortselection(arr,n);

}
