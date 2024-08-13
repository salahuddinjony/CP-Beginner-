//Time complexity: O(n);

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
string s;
bool isPalindrome(int start_index,int end_index){
    int len=end_index-start_index+1;
    
    if(len<=1) return true; //base case

    if(s[start_index]!=s[end_index]) return false;

    return isPalindrome(start_index+1,end_index-1); //resursive case
}
int main(){
    optimize();
    cin>>s;
    int len=s.length();
    if(isPalindrome(0,len-1)) cout<<"Palindrome!\n";
    else cout<<"Not Palindrome!\n";
    return 0;
}


/*
//Time complexity: O(n^2);

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool isPalindrome(string s){
    int len=s.size();
    if(len<=1) return true; //base case
    if(s[0]!=s[len-1]) return false;
    string ss;
    for (int i = 1; i < len-1; i++) ss[i]=s[i];
    return isPalindrome(ss); //resursive case
}
int main(){
    optimize();
    string s;
    cin>>s;
    if(isPalindrome(s)) cout<<"Palindrome!\n";
    else cout<<"Not Palindrome!\n";
    return 0;
}
*/