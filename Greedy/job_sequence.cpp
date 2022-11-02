#include<bits/stdc++.h>
using namespace std;
struct Job{
    char id;
    int dead;
    int profit;
};
bool comparison(Job a,Job b)
{
    return (a.profit > b.profit);
}
void printJobScheduling(Job arr[] , int n )
{
    int mx = 0, count = 0;
    sort(arr,arr+n,comparison);
    int result[n];
    bool slot[n];
    for(int i=0;i<n;i++)
    {
        slot[i]=false; //all slots are free
    }
    for(int i=0;i<n;i++)
    {
        for(int j=min(n,arr[i].dead)-1;j>=0;j--)
        {
            if(slot[j]==false)
            {
                result[j]=i;
                slot[j]=true;       //all slots are filled
                mx += arr[i].profit;
                count++; 
                break;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(slot[i])
        {
            cout<<arr[result[i]].id<<endl;
        }
    }
    cout<< " count: "<<count <<"\n"<<"mx profit: "<<mx<<endl;
}
int main()
{
    int n,i;
    struct Job arr[1000];
    cout<<"enter the max job deadlines: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"enter task: ";
        cin>> arr[i].id;
        cout<<"enter deadline: ";
        cin>> arr[i].dead;
        cout<<"enter profit: ";
        cin>> arr[i].profit;
    }
    cout << "Following is maximum profit sequence of jobs: "<<endl;
    printJobScheduling(arr,n);
    return 0;
}