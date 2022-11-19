// Given an array arr of n positive integers and a number k. One can apply a swap operation on the array any number of times, i.e choose any two index i and j (i < j) and swap arr[i] , arr[j] . Find the minimum number of swaps required to bring all the numbers less than or equal to k together, i.e. make them a contiguous subarray.

// Example 1:

// Input : 
// arr[ ] = {2, 1, 5, 6, 3} 
// K = 3
// Output : 
// 1
// Explanation:
// To bring elements 2, 1, 3 together,
// swap index 2 with 4 (0-based indexing),
// i.e. element arr[2] = 5 with arr[4] = 3
// such that final array will be- 
// arr[] = {2, 1, 3, 6, 5}


#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minSwap(int a[], int n, int k) {
        int cnt = 0;
        for(int i = 0; i<n ;i++)
        {
            if(a[i]<=k)
            {
                cnt++;
            }
        }
        int greater = 0;
        for(int i = 0; i<cnt; i++)
        {
            if(a[i]>k)
            {
                greater++;
            }
        }
        int ans = greater;
        for(int i = 0, j = cnt; j<n; i++,j++)
        {
            if(a[i] > k)
            {
                greater--;
            }
            //use IF ,,,not use else if
            if(a[j] > k)
            {
                greater++;
            }
            ans = min(ans,greater);
        }
        return ans;
    }
};
// Driver code
int main() {

	int t,n,k;
	cin>>t;
	while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        Solution ob;
        cout << ob.minSwap(arr, n, k) << "\n";
    }
	return 0;
}