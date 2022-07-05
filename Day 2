class Solution {
public:
    int maxArea(int h, int w, vector<int>& arr, vector<int>& brr) {
        sort(arr.begin(),arr.end());
        sort(brr.begin(),brr.end()) ;
         arr.push_back(h) ;
        brr.push_back(w) ;
        long long int ctr=0 ;
        long long int ptr=0 ;
        long long int ans=0 ;
        long long int pans=0 ;
        for(int i=0;i<arr.size();i++)
        {
            ans=max(ans,arr[i]-ctr) ;
            ctr=arr[i] ;
        }
        for(int i=0;i<brr.size();i++)
        {
            pans=max(pans,brr[i]-ptr) ;
            ptr=brr[i] ;
        }
        // cout<<ans<<" "<<pans ; 
        const int mod=1000000007 ;
        return ((ans%mod)*(pans%mod))%mod ;
    }
};
