class Solution {
public:
int power(int n, int cnt)
{
    if(n==0 || n==1)
    return cnt;

    return power(n/3,cnt+1);
}
    bool isPowerOfThree(int n) {
         if(n%3!=0 && n!=1)
        return false;
        else if(n==1)
        return true;
        else
        {
            int x=power(n,0);
            if(pow(3,x)==n)
            return true;
            else return false;
        }
    }
};