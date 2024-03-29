#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
int mat[MAX][MAX];
int kthSmallest(int mat[MAX][MAX], int n, int k);
// driver program to test above function
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
    
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>mat[i][j];
        int r;
        cin>>r;
        cout<<kthSmallest(mat,n,r)<<endl;
    }
     // cout << "7th smallest element is " << kthSmallest(mat, 4, 7);
      return 0;
}

// } Driver Code Ends



int kthSmallest(int mat[MAX][MAX], int n, int k)
{
  int size = n * n;
  int a[size];
  int b = 0;
  for(int i = 0; i < n; i++)
  {
      for(int j = 0; j < n; j++)
      {
          a[b++] = mat[i][j];
      }
  }
  sort(a,a+(size));
  return a[k-1];
}




// optimal

APPROACH--
1) using binary search
2) using upper bound
 

int kthSmallest(int mat[MAX][MAX], int n, int k)

{

    int s=mat[0][0];

    int e=mat[n-1][n-1];

    int res=INT_MAX;

 

    

  while(s<=e){

    int mid=s+(e-s)/2;

    int count=0;

      for(int i=0;i<n;i++){

        count+=upper_bound(mat[i],mat[i]+n,mid)-mat[i];

        }

        if(count>=k){

          res=mid;

          e=mid-1;        

        }else{

          s=mid+1;

        }

       

    }

    

    if(res==INT_MAX){

        return -1;

    }else{

        return res;

    }

}

 

time complexity--
O(logn*logN*n)--
WHERE N CAN BE MAX int_max so logN can be constant.
hence time complexity--O(logn*n)
 

space complexity--O(1)