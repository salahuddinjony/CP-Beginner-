#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
void print(int n){
    if(n==0) return; //base case
    printf("%d\n",n); //if we print reverse order
    print(n-1);  //resursive case
    //printf("%d\n",n);//if we print normal oder
    
}
int main(){
    optimize();
    int n;
    scanf("%d", &n);
    print(n);
    return 0;
}
/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/