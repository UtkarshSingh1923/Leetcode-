class Solution {
public:
    int fib(int n) {
        if(n==0)
            return 0 ;
        int st=0 ;
        int st2=1 ;
        for(int i=2;i<=n;i++)
        {
            int st3=st2+st ;
            st=st2 ;
            st2=st3 ;
        }
        return st2 ; 
    }
};
