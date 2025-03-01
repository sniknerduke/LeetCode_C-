class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i = 0;
        for(auto const num : nums) {
            if (num == target) return i;
            else if (num > target) {
                return i;
            }
            else i++;
        }
        return i;
    }
};
