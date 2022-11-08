class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
        sort(a.begin(),a.end());
        int i=0;
        long long ans = LONG_MAX;
        while(i+m-1<n)
        {
            ans = min(a[i+m-1]-a[i],ans);
            i++;
        }
        return ans;
    }   
};