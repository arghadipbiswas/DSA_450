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