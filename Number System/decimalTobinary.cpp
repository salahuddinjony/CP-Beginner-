#include<bits/stdc++.h>
using namespace std;

void binary(int decimal){

    string b;
    while (decimal>0)
    {
        b+=string(1,'0'+decimal%2);
        decimal/=2;
    }
    reverse(b.begin(),b.end());
    cout<<b<<endl;
    
}
int main(){
    int decimal;
    cin>>decimal;
    binary(decimal);

return 0;
    
}