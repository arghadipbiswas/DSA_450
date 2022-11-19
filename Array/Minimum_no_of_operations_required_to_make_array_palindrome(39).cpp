//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;
class Solution {
public:
    int PalinArray(int a[], int n)
    {
    	// code here
    	 int res=0,flag=0;
        for(int i=0;i<n;i++)
        {
            int temp=a[i];
            while(a[i]>0)
            {
                int digit=a[i]%10;
                res=(res*10)+digit;
                a[i]=a[i]/10;
            }
            if(temp==res)
            {
                res=0;
                flag=1;
            }
            else
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}