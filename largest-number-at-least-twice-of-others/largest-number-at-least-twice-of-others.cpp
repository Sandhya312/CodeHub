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
            if(max !=nums[j] && idx !=j){
                if(nums[j]>max/2) return -1;
            }
        }
        return idx;
    }
};

