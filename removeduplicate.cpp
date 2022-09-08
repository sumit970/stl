
#include <iostream>
using namespace std;
 
string rduplicate(string str){

    if(str.length() == 0) return str;

    for(int i = 1; i < str.length(); i++){
        if(str[i-1]==str[i]){
        }
        else
        {
            str.push_back(str[i]);
        }
    }   
     return str;
}

int main() 
{
    string repword=rduplicate("hello");
    cout<<repword<<endl;
}
