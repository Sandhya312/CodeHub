class Solution {
public:
    int dominantIndex(vector<int>& nums) {
       int n = nums.size() ;
        int lar = nums[0];
        int in = 0 ;
        for(int i=1 ; i<n ; i++)
        {
           if(lar<nums[i])
           {
               lar = nums[i] ;
               in = i ;
           }
        }   
        for(int j=0 ; j<n ; j++)
        {
            if(in!=j && nums[j]>lar/2)
            {
               return -1 ;
            }
        }
        return in ;
    }
};

