class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int flag= 0;
        int p=nums[0] ;
        int sz=1 ;
        for(int i=1;i<nums.size();i++)
        {
            int k=nums[i]-p ;
            if((k<0&&flag>=0)||(k>0&&flag<=0))
            {
                sz++ ;
                flag=nums[i]-p ;
                
            }
            
             p=nums[i] ;

        }
        return sz ;
    }
};
