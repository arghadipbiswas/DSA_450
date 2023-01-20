class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> temp(nums.size());
        for(int i = 0;i <nums.size(); i++)
        {
            temp[(i + k) % nums.size()] = nums[i];
            //temp[(0 + 2) % 4] = nums[0]
            //temp[(1 + 2) % 4] = nums[1] .....
        }
        nums = temp;
    }
};