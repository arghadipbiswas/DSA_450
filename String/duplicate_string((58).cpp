// #include <bits/stdc++.h>
// using namespace std;
// void printDups(string str)
// {
//     int count=0;
//     string o;
//     cout<<" element: ";
// 	for (int i = 0; i < str.size(); i++) {
// 		for(int j=str.size();j>=0;j--)
//         {
//             if(str[i]==str[j])
//             {
//                 o = str[i];
//                 count++;
//             }
//         }
// 	}
//     cout<<count;
//     int n =o.size();
//     for(int i=0;i<n;i++)
//     {
//         cout<< o[i]<< " ";
//     }
// }
// int main()
// {
// 	string str = "test string";
// 	printDups(str);
// 	return 0;
// }



#include <bits/stdc++.h>
#define NO_OF_CHARS 256
using namespace std;
void printDuplicates(string s)
{
  int count[NO_OF_CHARS] = {}; 
  for(int i=0; i<s.size(); i++)
    count[s[i]]++; //increment the count of each character by using ASCII of character as key  
  for(int i=0; i<s.size(); i++)
    if(count[s[i]] > 1) //
      {
      cout<<s[i]<<"   count = "<<count[s[i]]<<endl;
      count[s[i]] = 0;
      }
}
int main()
{
  string s  = "tutorial cup";
  cout<<"Input string is "<<s<<endl;
  printDuplicates(s);
}