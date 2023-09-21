class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int repeated=-1;
        for (int i=1; i<nums.size(); i++){
            if (nums[i-1]==nums[i]){
                repeated=nums[i];
            }
            if (repeated!=-1){
                break;
            }
        }
        return repeated;
        
    }
};
