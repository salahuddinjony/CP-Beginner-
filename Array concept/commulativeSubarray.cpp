#include<bits/stdc++.h>
using namespace std;
const int N=101;
int arr[N],carr[N]; //carr for commulative array
int main(){
    int n;
    cin>>n;
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
        
    }
    for (int i = 0; i < n; i++)
    {
       if(i==0){
        carr[i]=arr[i];
       }
       else{
        carr[i]=carr[i-1]+arr[i];
       }
    }
    
    int q,l,r;
    cin>>q;
    cin>>l>>r;

    while (q--)
    {
        int sum=0;
       if(l==0){
        sum=carr[r];

       }
       else{
        sum=carr[r]-carr[l-1];
       }

       cout<<sum<<endl;
        
       
    }
    
    
    
    


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/