#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
int f(int n){
    if(n==1 or n==0) return 1; //base case
    int ans=1;
    ans= n * f(n-1); //resursive case
    return ans;
}
int main(){
    optimize();
    int n;
    scanf("%d", &n);
    printf("%d",f(n));


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/