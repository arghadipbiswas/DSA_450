class Solution{
    public:
    string removeConsecutiveCharacter(string s)
    {
        // code here.
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==s[i+1])
            {
                s.replace(i,1,"");
                i--;
            }
        }
        return s;
    }
};