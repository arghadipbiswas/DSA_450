//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int inSequence(int a, int b, int c){
        // code here
        if(c==0)
        {
            if(b==a)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        if(((b-a)%c==0) && ((b-a)/c>=0))
        {
            return 1;
        }
        else 
        {
            return 0;
        }
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int A, B, C;
        cin>>A>>B>>C;
        
        Solution ob;
        cout<<ob.inSequence(A, B, C)<<endl;
    }
    return 0;
}