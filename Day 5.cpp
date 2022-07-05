class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>has ;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            has.insert(nums[i]) ;
        }
        int ctr=1 ;
        int ans=0 ;
        for(auto i:has)
        {
            if(has.count(i-1))
            {
                ctr++ ;
            }
            else
            {
                ctr=1 ;
            }
            ans=max(ans,ctr) ;
        }
        return ans  ;
    }
};
