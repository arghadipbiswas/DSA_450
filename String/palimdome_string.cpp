#include<bits/stdc++.h>
using namespace std;
int isPalindrome(string S)
{
	string P = S;
	reverse(P.begin(),P.end());
	if(S == P)
	{
	    return 1;
	}
	else{
	    return 0;
	}
}
int main()
{
    string S;
    cout<<"enter the String: ";
    cin>>S;
    cout<<isPalindrome(S);
    return 0;
}