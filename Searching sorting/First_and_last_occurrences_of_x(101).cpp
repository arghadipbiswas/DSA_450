//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std; 
bool findPair(int arr[], int size, int n);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    return 0;
}
vector<int> find(int arr[], int n , int x )
{
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            ans.push_back(i);
            break;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]==x)
        {
            ans.push_back(i);
            break;
        }
    }
    if(ans.empty()==true)
    {
        ans.push_back(-1);
        ans.push_back(-1);
    }
    return ans;
}