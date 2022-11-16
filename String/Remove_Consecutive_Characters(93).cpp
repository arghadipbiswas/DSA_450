//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 
class Solution{
    public:
    string removeConsecutiveCharacter(string s)
    {
        // code here.
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==s[i+1])
            {
                s.replace(i,1,"");
                i--;
            }
        }
        return s;
    }
};

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
} 
