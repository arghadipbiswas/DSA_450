/*
    Input : arr[] = {4, 5, 6, 7, 6}
           k = 1
           x = 6
Output : 2
The first index of 6 is 2.

Input : arr[] = {20, 40, 50, 70, 70, 60}  
          k = 20
          x = 60
Output : 5
The index of 60 is 5
*/

#include<bits/stdc++.h>
using namespace std;
int search(int *arr,int n,int x,int k)
{
    int i=0;
    while (i<n)
    {
        if(arr[i]==x)
        {
            return i;
        }
        i=i+max(1,abs(arr[i]-x/k));
    }
    cout << "number is not present!";
    return -1;
    
}
int main()
{
    int arr[] = {2, 4, 5, 7, 7, 6};
    int k=6;
    int x=2;
    int n= sizeof(arr)/sizeof(arr[0]);
     cout << "Element " << x  << " is present at index "<< search(arr, n, x, k);
     return 0;
}