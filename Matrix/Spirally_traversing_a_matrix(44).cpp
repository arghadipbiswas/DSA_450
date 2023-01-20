#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        vector<int> ans;   // taking vector , name as vector
    r = matrix.size();
    c = matrix[0].size();
    int cnt =0;
    int total = r * c;
    
    //index identification
    int startingRow = 0;
    int endingRow = r - 1;
    int startingCol = 0;
    int endingCol = c - 1;
    
    //all traversal
    while(cnt < total)
    {
        //print starting row
        for(int index = startingCol; index <= endingCol && cnt < total; index++)
        {
            ans.push_back(matrix[startingRow][index]);
            cnt++;
        }
        startingRow++;
        //print ending col
        for(int index = startingRow; index <= endingRow && cnt < total; index++)
        {
            ans.push_back(matrix[index][endingCol]);
            cnt++;
        }
        endingCol--;
        //print ending row
        for(int index = endingCol; index >= startingCol && cnt < total; index--)
        {
            ans.push_back(matrix[endingRow][index]);
            cnt++;
        }
        endingRow--;
        //print starting col
        for(int index = endingRow; index >= startingRow && cnt < total; index--)
        {
            ans.push_back(matrix[index][startingCol]);
            cnt++;
        }
        startingCol++;
    }
    return ans; 
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}