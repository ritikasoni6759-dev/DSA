class Solution {
public:
    bool isPalindrome(int x) {
        long long n=x;
        long long res=0;
        while(n>0)
        {
            long long ld=n%10;
             res=res*10+ld;
            n=n/10;
        }
        if(res==x)
        return true;
        else return false;
    }
};