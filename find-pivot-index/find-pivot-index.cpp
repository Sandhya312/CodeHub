class Solution {
public:
    int pivotIndex(vector<int>& nums) {
      int sumLeft=0;
       int sumRight;
        int n=nums.size();
       int sum =accumulate(nums.begin(),nums.end(),0);
       for(int i=0;i<nums.size();i++){
           sumRight = sum - nums[i] -sumLeft;
           if(sumLeft == sumRight) return i;
           sumLeft +=nums[i];
           }
        return -1;
    }
};