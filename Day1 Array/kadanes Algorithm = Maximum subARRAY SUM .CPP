class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum=0;
        int cursum=0;
        for(int i=0; i<nums.size(); i++)
        {
            cursum=cursum+nums[i];
            if(cursum>maxsum){
                maxsum=cursum;
            }
            if(cursum<0){
                cursum=0;
            }
        }
        return maxsum;
    }
};
