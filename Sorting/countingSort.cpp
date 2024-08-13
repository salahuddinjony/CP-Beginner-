#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int N=200000;
int fre[N],ans[N],A[N];
int main(){
    optimize();
    int n;
    cin>>n;
    for (int i = 0; i <n; i++)
    {
        cin>>A[i];
    }
    int mn=*min_element(A, A+n);
    int mx=*max_element(A, A+n);
    int offset= -mn;
    for (int i = 0; i <n; i++)
    {
        fre[A[i] +offset]++;
    }
    int k =0;
    for (int i = mn; i <=mx; i++)
    {
       while (fre[i+offset] >0)
       {
        ans[k]=i;
        k++;
        fre[i+offset]--;
       }
       
    }
     for (int i = 0; i <n; i++)
    {
        cout<<ans[i]<<" ";
    }
    
    
    


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/