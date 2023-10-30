class Solution {
public:
int power(int n, int cnt)
{
    if(n==1 || n==0)
    return cnt;

    return power(n/2,cnt+1);
}
    bool isPowerOfTwo(int n) {
        if(n%2!=0 && n!=1)
        return false;
        else if(n==1)
        return true;
        else
        {
            int x=power(n,0);
            if(pow(2,x)==n)
            return true;
            else return false;
        }
    }
};