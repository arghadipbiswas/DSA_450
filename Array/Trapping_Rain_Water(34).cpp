class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        int lmax[n];
        int rmax[n];
        lmax[0]=arr[0];
       for(int i=1;i<n;i++)
       {
           lmax[i] = max(arr[i],lmax[i-1]);
       }
        rmax[n-1] = arr[n-1];
       for(int i=n-2;i>=0;i--)
       {
           rmax[i] = max(arr[i],rmax[i+1]);
       }
       long long  sum=0;
       for(int i=0;i<n;i++)
       {
           sum+=min(lmax[i],rmax[i])-arr[i];
       }
       return sum;
    }
};