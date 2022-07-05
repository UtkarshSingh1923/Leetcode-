class Solution {
public:
    static bool comp(vector<int>a,vector<int> b)
    {
        return a[1]>=b[1] ;
    }
    int maximumUnits(vector<vector<int>>& arr, int m) {
        sort(arr.begin(),arr.end(),comp) ;
        int i=0 ;
        int ans=0 ;
        while(m&&i<arr.size())
        {
            if(m>=arr[i][0]) 
            {
                ans+=arr[i][1]*arr[i][0] ;
                m-=arr[i][0] ;
            }
            else
            {
                ans+=arr[i][1]*m ;
                m=0 ;
            }
            i++ ;
        }
        return ans ;
    }
};