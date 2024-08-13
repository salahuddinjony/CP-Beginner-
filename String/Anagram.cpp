#include<bits/stdc++.h>
using namespace std;
const int N=2e5+123;
char s1[N],s2[N];

#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
int anagram(){
    int freq1[30],freq2[30];
    for (int i = 0; i <26; i++)
    {
        freq1[i]=freq2[i]=0;
    }
    for (int i = 0; s1[i]; i++)
    {
       freq1[s1[i]-'a']++;//s1[i]=97-97=0
    }
    for (int i = 0; s2[i]; i++)
    {
       freq2[s2[i]-'a']++;
    }
    for (int i = 0; i <26; i++)
    {
        if(freq1[i]!=freq2[i]) return 0;
    }

    return 1;
}
int main(){
    optimize();
    scanf("%s %s",s1,s2);
    if(anagram()) printf("YES");
    else printf("NO");



    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/