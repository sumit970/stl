#include <iostream>
using namespace std;



    #define m 1000000007
   long long power(int N,int R)
   {
      //Your code here
       
       if(R==0)
           return 1;
       
       long long temp = power(N, R/2);
       temp = (temp * temp)%m;
       
       if(R%2==0)
           return temp;
       
       else
           return (temp * N)%m;
   }
   int main(){
    long res=power(7,2);
    cout<<res<<endl;
   }

