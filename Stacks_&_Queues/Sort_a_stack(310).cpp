/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */
void SortedStack :: sort()
{
   //Your code here
   stack<int> tempst;
   while(!s.empty())
   {
       int temp = s.top();
       s.pop();
   while(!tempst.empty() && tempst.top()>temp)
   {
       s.push(tempst.top());
       tempst.pop();
   }
   tempst.push(temp);
   }
   s=tempst;
}