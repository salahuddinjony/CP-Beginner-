#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=3;
    int b=3;

    cout<<(a & b)<<endl; //bitwise AND
    cout<<(a | b)<<endl; //bitwise OR
    cout<<(a ^ b)<<endl; //bitwise XOR (same input return 0)
    cout<<(~a)<<endl; //bitwise NOT (sign bit will be 1 thats why show negative number)

    //popreties of XOR
    /* 
    a ^ 0 = a
    a ^ a = 0
    a ^ a ^ b ^ a ^ b =a; (a ^ a =0, 0^ b=b, b ^ b=0, 0 ^ a = a)
    */

    int ones=__builtin_popcount(a ^ b); // it return number of one(1) bits
    cout<<"The different bits is: "<<ones<<endl;


    //Bitwise Shit

    int x=3;
    int y=x<<3; //3 times left shit of bits , here 3=11 then 11000=24 and it works x*pow(2,n)
    int z=x>>3; //3 times right shit of bits , here 3=11 then 00=0 and it works x*(1/pow(2,n) )  
    cout<<y<<endl;
    cout<<z<<endl;


return 0;
    
}