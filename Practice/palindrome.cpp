#include <iostream>
using namespace std;

int main()
{
     int n, num, digit, rev = 0;

     cout << "Enter a positive number: ";
     cin >> num;

     n = num;

     do
     {
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     } while (num != 0);

     cout << " The reverse of the number is: " << rev << endl;

     if (n == rev)
         cout << " The number is a palindrome.";
     else
         cout << " The number is not a palindrome.";

    return 0;
}



//Optimal solution in below
//using stack


class Solution {
public:
    bool isPalindrome(int x) {
        stack<int> st;
        if(x < 0)
        {
            return false;
        }
        int y = x;
        while(x)
        {   
            st.push(x%10);
            x/=10;
        }
        while(y)
        {
            if(st.top() != (y % 10))
            {
                return false;
            }
            st.pop();
            y/=10;
        }
        return true;
    }
};