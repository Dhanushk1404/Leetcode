class Solution {
public:
    void backt(vector<int>& nums, int st, vector<vector<int>>& res) {
        if (st == nums.size()) {
            res.push_back(nums);
            return;
        }

        for (int i = st; i < nums.size(); i++) {
            swap(nums[st], nums[i]);      
            backt(nums, st + 1, res);     
            swap(nums[st], nums[i]);     }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        backt(nums, 0, res);
        return res;
    }
};
