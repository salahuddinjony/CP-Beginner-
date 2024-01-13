#include<bits/stdc++.h>
using namespace std;
const int N=101;
int arr[N],updated_arr[N],updated_pointer[N];
int main(){

    /* //Brute force concept
    int n;
    cin>>n;
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
        
    }
    
    int q,l,r,v;
    cin>>q;
    cin>>l>>r>>v;

    while (q--)
    {
       for (int i =l; i <=r; i++)
       {
        arr[i]=arr[i]+v;
       }       
    }
    for (int i = 0; i <n; i++)
       {
        cout<<arr[i]<<" ";
       }
     */


    int n;
    cin>>n; //5
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i]; //[1 2 3 4 5]
        
    }
    
    int q;
    cin>>q;
   

    while (q--)
    {
        int q,l,r,v;
        cin>>l>>r>>v;  //l=2 ,r=3
        updated_arr[l]+=v; //[0 0 10 0 0]  
        updated_arr[r+1]-=v; //[0 0 10 0 -10]    
    }
    updated_pointer[0]=updated_arr[0];
    for (int i = 1; i <n; i++)
    {
        updated_pointer[i]=updated_pointer[i-1]+updated_arr[i]; //[0 0 10 10 0]
    }
    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]+updated_pointer[i]<<" ";
    }
    
    
    
    


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/