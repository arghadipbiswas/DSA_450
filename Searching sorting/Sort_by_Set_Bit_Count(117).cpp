// Given an array of integers, sort the array (in descending order) according to count of set bits in binary representation of array elements. 

// Note: For integers having same number of set bits in their binary representation, sort according to their position in the original array i.e., a stable sort.

 
// Example 1:
// Input: 
// arr[] = {5, 2, 3, 9, 4, 6, 7, 15, 32};
// Output:
// 15 7 5 3 9 6 2 4 32
// Explanation:
// The integers in their binary
// representation are:
// 15 - 1111
// 7  - 0111
// 5  - 0101
// 3  - 0011
// 9  - 1001
// 6  - 0110
// 2  - 0010
// 4  - 0100
// 32 - 10000
// hence the non-increasing sorted order is:
// {15}, {7}, {5, 3, 9, 6}, {2, 4, 32}

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void sortBySetBitCount(int arr[], int n)
    {
        // Your code goes here
        stable_sort(arr,arr+n,cmp);
    }
    static bool cmp(int a,int b)
    {
        int cntA=0,cntB=0;
        while(a)
        {
            a&=(a-1);
            cntA++;
        }
        while(b)
        {
            b&=(b-1);
            cntB++;
        }
        return cntA>cntB;
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        ob.sortBySetBitCount(arr, n);
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}




// How to Sort in Descending Order using stable_sort()?
// Like sort(), stable_sort() takes a third parameter that is used to specify the order in which elements are to be sorted. We can pass “greater()” function to sort in decreasing order. This function does comparison in a way that puts greater element before. 

// Syntax:

// // arr is the array and n is the size
// stable_sort(arr, arr + n, greater<int>());

// When to Prefer stable_sort over sort()? 
// Sometime we want to make sure that order of equal elements is same in sorted array as it was in original array. This can be useful if these values have associated other fields. For example, 

// Consider sorting students by marks, if two students have the same marks, we may want to keep them in the same order as they appear input. Please refer to stability in sorting algorithms for details.
// Consider we have time intervals sorted by ending time and we want to sort by start time. Also, if two start times are same, we want to keep them sorted by the end time. This is not guaranteed by sort().