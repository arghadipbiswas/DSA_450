//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            int i=0,j=0,k=0;
            vector<int> v;
            while(i<n1 && j<n2 && k<n3)
            {
                if(A[i] == B[j] && A[i] == C[k])
                {
                    v.push_back(A[i]);
                    i++;j++;k++;
                }
                else if(A[i] < B[j])
                {
                    i++;
                }
                else if(B[j] < C[k])
                {
                    j++;
                }
                else
                {
                    k++;
                }
            }
            vector<int> res;
            if(v.size() != 0)
            {
                res.push_back(v[0]);
            }
            for(int i=1;i<v.size();i++)
            {
                if(v[i] == v[i-1])
                {
                    continue;
                }
                res.push_back(v[i]);
            }
            return res;
        }

};
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}