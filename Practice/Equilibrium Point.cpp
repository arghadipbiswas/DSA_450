#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int equilibriumPoint(long long arr[], int n) {
    
        int l = 0;
        int r = n - 1;
        int lsum = 0;
        int rsum = 0;
        while(l<r)
        {
            if(lsum == rsum)
            {
                lsum += arr[l++];
                rsum += arr[r--];
            }
            else if(lsum > rsum)
            {
                rsum += arr[r--];
            }
            else{
                lsum += arr[l++];
            }
        }
        if(lsum == rsum && l == r)
        {
            return l+1;
        }
        return -1;
    }
};
int main() {
    long long t;
    
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long a[n];
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}