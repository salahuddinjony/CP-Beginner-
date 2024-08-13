#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
int add(int n){
    if(n==0) return 0; //base case
    return n+add(n-1);  //resursive case
}
int main(){
    optimize();
    int n;
    scanf("%d", &n);
    printf("%d",add(n));
    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/