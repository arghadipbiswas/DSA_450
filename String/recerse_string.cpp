#include<bits/stdc++.h>
using namespace std;
void reverse(char s[],int n,int start,int end);
void print(char s[],int n);
void reverse(char s[],int n,int start,int end)
{
    while(start < end)
    {
        swap(s[start],s[end]);
        start ++;
        end--;
    }
}
void print(char s[],int n)
{
    cout<<" reverse: ";
    for(int i=0;i<n;i++)
    {
        cout<<s[i]<<" ";
    }
}
int main()
{
    int n,start,end;
    char s[100];
    cout<<"no.of n: ";
    cin>>n;
    cout<<" enter the chars: ";
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    start = 0,end =n-1;
    reverse(s,n,start,end);
    print(s,n);
    return 0;
}