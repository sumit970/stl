#include <iostream>
using namespace std;

void short012(int arr[], int n)
{

       int zero=0,one=0,two=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                zero++;
            }
            if(arr[i]==1){
                one++;
            }
            else{
                two++;
            }
        }
         for(int i=0;i<n;i++){
             if(i<zero)
             {
                 arr[i]=0;
             }
             if(i<(zero+one)&&i>=zero)
             {
                 arr[i]=1;
             }

             else if(i<(zero+one+two)&&i>=(zero+one)){
                 arr[i]=2;
             }
            
             
         }
         for(int i=0;i<n;i++){
             cout<<arr[i]<<" ";
         }


}

int main()
{

    int n = 20;
    int arr[] = {0,2,1,2,0,0,2,1,2,0,2,1,0,2,1,0,2,2,2,1};
    short012(arr, n);
}