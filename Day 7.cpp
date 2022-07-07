class Solution {
public:
    int  has[101][101] ;
    bool call(string s1,string s2,string s3,int i,int j,int k)
    {
       if(has[i][j]!=0)
       {
           if(has[i][j]==-1)
               return false ;
           else
               return true ;
       }
        if(k==s3.size()&&j==s2.size()&&i==s1.size())
        {
            has[i][j]=1 ;
            return true ;
        }
        if(k<s3.size()&&i<s1.size()&&s3[k]==s1[i])
        {
            if(call(s1,s2,s3,i+1,j,k+1))
            {  has[i][j]=1 ;
                return true ;
            }
        }
        if(j<s2.size()&&k<s3.size()&&s3[k]==s2[j])
        {
            
            if(call(s1,s2,s3,i,j+1,k+1))
            { has[i][j]=true;
                return true ;
            }
        }
        has[i][j]=-1 ;
        return false;
    }
    bool isInterleave(string s1, string s2, string s3) {
        for(int i=0;i<101;i++)
        {
            for(int j=0;j<101;j++)
            {
                has[i][j]=0 ;
            }
        }
        return call(s1,s2,s3,0,0,0) ;
    }
};
