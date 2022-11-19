#include <bits/stdc++.h>
using namespace std;
class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
        // Your code goes here   
        int i = 0, j = 0, ans = INT_MAX, sum = 0;
        if(n==1)
        {
            if(arr[0]>x)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        for(;j<n;)
        {
            sum+=arr[j];
            j++;
            while(sum>x && i<=j)
            {
                ans = min(ans,j-i);
                sum -= arr[i];
                i++;
            }
        }
        return ans;
    }
};
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.smallestSubWithSum(a,n,x)<<endl;
	}
	return 0;
}