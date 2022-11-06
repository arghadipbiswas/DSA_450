class Solution {
  public:
    int countSquares(int N) {
        int c=0;
        for(int i=1;i*i<N;i++)
        {
            c++;
        }
        return c;
    }
};