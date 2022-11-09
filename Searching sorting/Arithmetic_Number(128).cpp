class Solution{
public:
    int inSequence(int a, int b, int c){
        // code here
        if(c==0)
        {
            if(b==a)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        if(((b-a)%c==0) && ((b-a)/c>=0))
        {
            return 1;
        }
        else 
        {
            return 0;
        }
    }
};