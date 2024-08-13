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

    /* for (int i = 1; i <n; i++) // 7 4 1 0  always check the left number if get greater than na current and then swap
    {
        int k=i;
        for (int j = 1; j <=i; j++)
        {
            if(a[k]<a[k-1]){
                swap(a[k],a[k-1]);
                k--;
            }
           
        }
        
    } */

   for (int i = 1; i <n; i++) 
    {
        int j=i;
        while (j-1>=0 && a[j]<a[j-1])
        {
            swap(a[j],a[j-1]);
            j--;
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

