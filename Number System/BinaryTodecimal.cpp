#include<bits/stdc++.h>
using namespace std;
int Todecimal(string binary){
    int decimal=0;
    for (int i = 0; i <binary.size(); i++)
    {
        decimal*=2; //for binary every position change 2 mulple of previous stage
        decimal+=binary[i]-'0';  // binary[i] is either 0 or  ascii value , 0=48, 1=49 and '0'=48 then minus between them and show their diffrent

    }
    return decimal;
    
}
int main(){
    string binary;
    cin>>binary;
   cout<< Todecimal(binary)<<endl;



return 0;
    
}