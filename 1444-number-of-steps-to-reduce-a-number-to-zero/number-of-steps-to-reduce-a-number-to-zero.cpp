class Solution {
public:
    int helper(int n,int c)
    {
        if(n==0) return c;
    if(n%2==0)
    {
        return helper(n/2,c+1);
    }else
    {
        return helper(n-1,c+1);
    }

    }
    
    int numberOfSteps(int num) {
        int c=0;
       int p= helper(num,c);
       return p;
    }
};