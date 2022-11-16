//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
	public:
		int find_median(vector<int> v)
		{
		    sort(v.begin(),v.end());
		    int n=v.size();
		    int s=0;
		    int e=n-1;
		    int mid=(s+e)/2;
		    if(n%2==0)
		    {
		        int l=(v[mid]+v[mid+1])/2;
		        return l;
		    }
		        return v[mid];
		}
};

int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(n);
    	for(int i = 0; i < n; i++)
    		cin>>v[i];
    	Solution ob;
    	int ans = ob.find_median(v);
    	cout << ans <<"\n";
    }
	return 0;
}