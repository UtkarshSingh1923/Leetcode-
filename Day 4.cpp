class Solution {
public:
    int candy(vector<int>& arr) {
       int v=1000000 ;
        int n=arr.size() ;
        if(n<=1)
            return 1 ;
        vector<int>brr(n,0) ;
        if(arr[0]>arr[1])
        {
            brr[0]=v ;
        }
        else if(arr[0]<arr[1])
        {
            brr[0]=1 ;
        }
        if(arr[n-1]>arr[n-2])
        {
            brr[n-1]=v ;
        }
        else if(arr[n-1]<arr[n-2])
        {
            brr[n-1]=1 ;
        }
       
        for(int i=1;i<n-1;i++)
        {
            if(arr[i]>arr[i-1]&&arr[i]>=arr[i+1]||arr[i]>=arr[i-1]&&arr[i]>arr[i+1])
            {
                brr[i]=v ;
            }
            if(arr[i]<arr[i-1]&&arr[i]<=arr[i+1]||arr[i]<=arr[i-1]&&arr[i]<arr[i+1])
            {
                brr[i]=1 ;
            }
        }
       
        int flag=0 ;
        int ctr=1 ;
        for(int i=0;i<n;i++)
        {
            if(brr[i]==1)
            {
                flag=1 ;
            }
            if(brr[i]==v)
            {
                flag=0  ;
                ctr=1 ;
            }
            if(flag)
            {
                
                if(i>0)
                {
                    if(arr[i]==arr[i-1])
                    {
                        // brr[i]=brr[i-1] ;
                        continue ;
                    }
                }
                brr[i]=ctr ;
                ctr++ ;
            }
        }
         
       flag=0 ;
        ctr=1 ;
        for(int i=n-1;i>=0;i--)
        {
            if(brr[i]==1)
            {
                flag=1 ;
            }
            if(brr[i]==v)
            {
                flag=0  ;
                ctr=1 ;
            }
            if(flag)
            {
                 if(i<n-1)
                {
                    if(arr[i]==arr[i+1])
                    {
                        
                        continue ;
                    }
                }
                brr[i]=ctr ;
               
                ctr++ ;
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<brr[i]<<" "  ;
        }
        cout<<"\n" ;
        if(brr[0]==v)
        {
            brr[0]=brr[1]+1 ;
        }
        if(brr[n-1]==v)
        {
            brr[n-1]=brr[n-2]+1 ;
        }
        int m=-1 ;
        for(int i=1;i<n-1;i++)
        {
            if(brr[i]>=v)
            {
                
                if(i<n-1&&brr[i+1]>=v)
                {
                    brr[i]=brr[i-1]+1 ;
                    brr[i+1]=brr[i+2]+1;
                }
                else
                {
                    brr[i]=max(brr[i-1],brr[i+1])+1 ; 
                }
            }
            
        }
        for(int i=0;i<n;i++)
        {
            if(brr[i]==0)
            brr[i]=1 ;
        }
        long long int ans=0;
        
        for(int i=0;i<n;i++)
        {
            cout<<brr[i]<<" " ;
        }
        for(int i=0;i<n;i++)
        {
            ans+=brr[i] ;
        }
        return ans ;
        
    }
};