
//time complexity : O(n^2)

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    optimize();
    char s[105];
    scanf("%s",s);//acmadamaa
    int len=strlen(s);
    int max_len=0,l,r;
    //odd
    for (int center = 0; center <len; center++)
    {
        int cur_len=1;
        for (int k = 1; center-k>=0 && center+k<len; k++)
        {
            if(s[center-k]!=s[center+k]) break;
            cur_len+=2;
        }
        if(cur_len>max_len){
            max_len=cur_len;
            l=center-cur_len/2;
            r=center+cur_len/2;

        }
        
    }
    //even
    for(int c1=0,c2=c1+1;c1<len-1;c1++,c2++){
        int cur_len=0;
        for (int k = 0; c1-k>=0 && c2+k<len; k++)
        {
           if(s[c1-k]!=s[c2+k]) break;
            cur_len+=2;
        }
         if(cur_len>max_len){
            max_len=cur_len;
           

        }
        
    }

    printf("%d\n",max_len);
    
    /* for (int i =l; i <=r; i++)
    {
        printf("%c",s[i]);
    }
    
     */


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/





//time complexity : O(n^3)

/* #include<bits/stdc++.h>
using namespace std;
const int N=2e5+123;
char s[N];
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);

int isPalindrom(int l,int r){
    int len=strlen(s);
    for (int i =l,j=r; i <j; i++,j--)
    {
        if(s[i]!=s[j]) return 0;
    }
    return 1;
    
}
int main(){
    optimize();
    scanf("%s",s);
    int len=strlen(s);
    int max_len=0;
    for (int i = 0; i <len; i++)
    {
        for (int j =i; j < len; j++)
        {
            if(isPalindrom(i,j)){
                int cur_len=j-i+1;
                if(cur_len>max_len){
                    max_len=cur_len;
                }

            }
        }
        
    }
    cout<<max_len<<endl;
    


    return 0;
}



 */