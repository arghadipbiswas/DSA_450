#include<bits/stdc++.h>
using namespace std;
typedef struct {
   int v;
   int w;
   float d;
}Item;
void input(Item item[], int sizeOfItems)
{
   int i;
   cout << "Enter total "<< sizeOfItems <<" item's values and weight" <<endl;
   for(i=0;i<sizeOfItems;i++)
   {

      cout<<"Value " <<i+1<<"v : ";
      cin>> item[i].v;
      cout<<"Weight " <<i+1<<"w : ";  
      cin>> item[i].w;
   }
}
void display(Item item[], int sizeOfItems)
{
   int i;
   cout<<"Value: " ;
   for(i=0;i<sizeOfItems;i++)
   {
      cout << item[i].v << "\t";
   }
   cout<<endl<< "Weight: " ;
   for(i=0;i<sizeOfItems;i++)
   {
      cout<< item[i].w<<"\t";
   }
   cout<<endl;
}
bool compare(Item i1,Item i2)
{
   return (i1.d>i2.d);
}
void fractionalKnapsack(Item item[], int sizeOfItems,int W)
{
   float finalValue = 0, finalWeight =0;
   int i,j;
   for(i=0;i<sizeOfItems;i++)
   {
       item[i].d= (float)item[i].v/item[i].w;
   }
   sort(item,item+sizeOfItems,compare);
   for(i=0;i<sizeOfItems;i++)
   {
      if(finalWeight + item[i].w<=W)
      {
         finalValue += item[i].v;
         finalWeight += item[i].w;
      }
      else
      {
         int wt = W - finalWeight;
         finalValue += (wt * item[i].d);
         finalWeight += wt;
         break;
      }
   }
   cout<< "total weight: "<<finalWeight<<endl;
   cout<<"mxprofit: "<<finalValue<<endl;
}
int main()
{
    int n, W;
    cout<<"enter the value of n: ";
	cin>>n;
    cout<<"enter the value of W: ";
	cin>>W;
	Item arr[n];
    cout<<"Give all the values: "<<endl;
	for(int i=0;i<n;i++)
    {
        cout<<"value "<<i+1<<": ";
		cin>>arr[i].v;
	}
    cout<<"Give all the weights: "<<endl;
	for(int i=0;i<n;i++)
    {
        cout<<"weight "<<i+1<<": ";
		cin>>arr[i].w;
	}
    fractionalKnapsack(arr, n , W); 
    return 0;
}



//Another way : 


// #include <bits/stdc++.h>
// using namespace std;
// struct Item{
//     int value;
//     int weight;
// };
// bool comparison(Item a,Item b)
// {
//     return(((double)a.value/(double)a.weight)>((double)b.value/(double)b.weight));
// } 
// void fractionalKnapsack(int W, Item arr[], int n)
// {
//     double totalweight = 0,totalvalue = 0,wt;
//     sort(arr,arr+n,comparison);
//     for(int i=0;i<n;i++)
//     {
//         if(totalweight + arr[i].weight <= W)
//         {
//             totalweight+=arr[i].weight;
//             totalvalue+=arr[i].value;
//         }
//         else
//         {
//             wt=W-totalweight;
//             totalvalue+= (wt*((double)arr[i].value/(double)arr[i].weight));
//             totalweight+=wt;
//             break;
//         }
//     }
//     cout<< "total weight: "<<totalweight<<endl;
//    cout<<"mxprofit: "<< totalvalue<<endl;
// }
// int main()
// {
// 	 int n, W;
//     cout<<"enter the value of n: ";
// 	cin>>n;
//     cout<<"enter the value of W: ";
// 	cin>>W;
// 	Item arr[n];
//     cout<<"Give all the values: "<<endl;
// 	for(int i=0;i<n;i++)
//     {
//         cout<<"value "<<i+1<<": ";
// 		cin>>arr[i].value;
// 	}
//     cout<<"Give all the weights: "<<endl;
// 	for(int i=0;i<n;i++)
//     {
//         cout<<"weight "<<i+1<<": ";
// 		cin>>arr[i].weight;
// 	}
//     fractionalKnapsack(W, arr, n); 
//     return 0;
// }