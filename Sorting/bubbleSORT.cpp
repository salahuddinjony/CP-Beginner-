#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    optimize();
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i <n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i <n; i++)
    {
        for (int j =0; j+1 <n-i; j++)
        {
            if(a[j+1]<a[j]){     // 3 1 5 1 
               swap(a[j],a[j+1]);
            }
        }

    }
    for (int i = 0; i <n; i++)
    {
        cout<<a[i]<<" ";
    }
    

    


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/