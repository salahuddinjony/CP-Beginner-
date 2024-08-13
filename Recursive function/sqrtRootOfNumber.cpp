#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
void f(){
    int n;
    if(scanf("%d",&n)!=1){
        return;
    }
    f();
    printf("%lf\n", sqrt(n));
}
int main(){
    optimize();
    f();
    

    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/