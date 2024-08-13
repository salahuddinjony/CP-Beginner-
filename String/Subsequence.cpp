#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 123;
char s1[N], s2[N];
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
int SubSequence()
{
    int i = 0, j = 0;
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    while (j < len2)
    {
        while (i < len1)
        {
            if (s1[i] == s2[j])
            {
                i++; 
                j++;
                break;
            }
            i++;
        }
        if (i == len1)
            break;
    }
    if (j == len2)
        return 1;
    return 0;
}
int main()
{
    optimize();
    scanf("%s", s1);
    int q;
    scanf("%d", &q);
    while (q--)
    {
        scanf("%s", s2);
        if (SubSequence())
            printf("YES");
        else
            printf("NO");
    }

    return 0;
}

/*
 Author : SALAH
"HARD WORK CAN CHANGE LUCK"
*/