#include<bits/stdc++.h>
using namespace std;

string hexa(int decimal){

    string digit="0123456789ABCDEF";
    string hexa;
    while (decimal>0)
    {
        hexa+=digit[decimal%16];
        decimal/=16;
    }
    reverse(hexa.begin(),hexa.end());
    return hexa;
    
}

int main(){
    int decimal;
    cin>>decimal;
    cout<<hexa(decimal)<<endl;

return 0;
    
}