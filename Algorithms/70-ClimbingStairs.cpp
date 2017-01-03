class Solution {
public:
    int climbStairs(int n) 
    {
        if(n<3)
        return n;
        int f1=1;
        int f2=2;
        int i=0;
        for(i=3;i<=n;i++)
        {
            f2=f2+f1;
            f1=f2-f1;
        }
    
        return f2;
    }
};