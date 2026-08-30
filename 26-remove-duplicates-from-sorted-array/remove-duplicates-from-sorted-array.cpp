class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int left = 0;
        int right = 1;

        while(right <= nums.size()-1){
            if(nums[left] == nums[right]){
                right++;
            }else{
                left++;
                swap(nums[left],nums[right]);
                right++;
            }
        }
        return left +1;
    }
};