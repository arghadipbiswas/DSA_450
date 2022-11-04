#include<bits/stdc++.h>
using namespace std;
bool findPair(int arr[], int size, int n);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        if(findPair(arr,l,n))
        {
            cout<<l<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
    return 0;
}
bool findPair(int arr[], int size, int n){
    sort(arr,arr+size);
    for(int i = size-1 ; i >= 0;i--)
    {
        for(int j = 0;j<size;j++)
        {
            if(i!=j && arr[i]-arr[j]==n)
            {
                return true;
            }
        }
    }
    return false;
}