#include<bits/stdc++.h>
using namespace std;
void reverseArray(int a[],int start , int end)
{
    while(start<end)
    {
        swap(a[start],a[end]);
        start++;
        end--;
    }
}
void print(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<< a[i] << " ";
    }
        cout<<endl;
}
int main()
{
    int arr[] = {2,1,5,6,9,75,3};
    int n = sizeof(arr)/(sizeof(arr[0]));
    cout<<" reverse: ";
    print(arr,n);
    reverseArray(arr,0,n-1);
    cout<<"after reverse: ";
    print(arr,n);
    return 0;
}