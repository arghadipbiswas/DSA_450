#include<bits/stdc++.h>
using namespace std;
void lcsAlgo(char s1[],char s2[],int m,int n)
{
    int LCS_table[m+1][n+1];
    for ( int i = 0; i <= m; i++)
    {
        for ( int j = 0; j <= n; j++)
        {
            if(i==0 || j==0)
            {
               LCS_table[i][j]=0;
            }
            
        }
    }
    for ( int i = 1; i <= m; i++)
    {
        for ( int j = 1; j <= n; j++)
        {
            if(s1[i-1]==s2[j-1])
            {
               LCS_table[i][j]=1+LCS_table[i-1][j-1];
            }
            else
                LCS_table[i][j]= max (LCS_table[i-1][j],LCS_table[i][j-1]);
        }
    }
    int index = LCS_table[m][n];
    char lcsAlgo[index+1];    //sá¹­ore char
    lcsAlgo[index] = '\0';
    int i=m,j=n;
    cout<<index<<endl;
    while (i>0 && j>0)
    {
        if(s1[i-1]==s2[j-1])
        {
            lcsAlgo[index-1]=s1[i-1];
            i--;
            j--;
            index--;
        }
        else if(LCS_table[i-1][j]>LCS_table[i][j-1])
            i--;
        else
            j--;
    }
    cout << "S1 : " << s1 << "\nS2 : " << s2 << "\nLCS: " << lcsAlgo << "\n";
}
int main()
{
    char s1[]="ABCDGH";
    char s2[]="AEDFHR";
    int m=strlen(s1);
    int n=strlen(s2);
    lcsAlgo(s1,s2,m,n);
}