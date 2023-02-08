class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max = nums[0];
        int idx = 0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>max){
                max = nums[i];
                idx=i;
            }
        }
        for(int j=0;j<nums.size();j++){
            if(max !=nums[j]){
                if(max/2<nums[j]) return -1;
            }
        }
        return idx;
    }
};
// int n = nums.size() ;
//         int lar = nums[0];
//         int in = 0 ;
//         for(int i=1 ; i<n ; i++)
//         {
//            if(lar<nums[i])
//            {
//                lar = nums[i] ;
//                in = i ;
//            }
//         }   
//         for(int j=0 ; j<n ; j++)
//         {
//             if(in!=j && nums[j]>lar/2)
//             {
//                return -1 ;
//             }
//         }
//         return in ;

