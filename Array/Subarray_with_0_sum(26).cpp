class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        set<int> v;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            if(sum==0)
            {
                break;
                return true;
            }
             v.insert(sum);
        }
        if(v.size()!=n)
        {
            return true;
        }
        else 
        {
            return false;
        }
        
    }
};