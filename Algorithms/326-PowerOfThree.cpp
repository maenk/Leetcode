class Solution {
public:
    bool isPowerOfThree(int n) {
        int i;
    for(i=0;i<100;i++)
    {
        if(pow(3,i)==n)
        return true;
    }
        return false;
    
}
};