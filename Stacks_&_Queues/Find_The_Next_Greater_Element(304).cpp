// N = 4, arr[] = [1 3 2 4]
// Output:
// 3 4 4 -1
// Explanation:
// In the array, the next larger element 
// to 1 is 3 , 3 is 4 , 2 is 4 and for 4 ? 
// since it doesn't exist, it is -1.


#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        stack<long long> st;
       st.push(-1);
       vector<long long> nge(n);
        
       for(int i=n-1; i>=0; i--)
       {
            long long curr = arr[i%n];
            while(!st.empty() && st.top() <= curr)
            {
                st.pop();
            }
            if(st.empty() == false)
            {
                nge[i] = st.top();
            }
            else
            {
                nge[i] = -1;
            }
            st.push(curr);
        }
        return nge;
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
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}