class Solution {
public:
    bool isPalindrome(int x) {
        int n=x;
        long long int res=0;
        while(n>0)
        {
            long long ld=n%10;
             res=res*10+ld;
            n=n/10;
        }
        
        return res==x;
     
    }
};