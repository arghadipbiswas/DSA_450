//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
       long max = arr[0];
       long sum = arr[0];
       for( int i = 1 ; i < n ; i++ )
       {
           sum = sum+arr[i];
           if(sum > max)
           {
               max = sum;
           }
           if(sum < arr[i])
           {
               sum = arr[i];
           }
           if(arr[i] > max)
           {
               max = arr[i];
           }
       }
       return max;
   }
};

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
