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
    for (int i = 0; i <n-1; i++)
    {
        int min_idx=i;
        for (int j = i+1; j <n; j++)
        {
            if(a[min_idx]>a[j]){
               min_idx=j;
            }
        }
        swap(a[i],a[min_idx]);
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