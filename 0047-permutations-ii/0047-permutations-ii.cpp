class Solution {
public:
    void backt(vector<int>& nums, vector<vector<int>>& res, vector<int>& c, vector<bool>& used) {
        if (c.size() == nums.size()) {
            res.push_back(c);
            return;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (used[i]) continue;              
            if (i > 0 && nums[i] == nums[i - 1] && !used[i - 1]) continue;

            used[i] = true;
            c.push_back(nums[i]);
            backt(nums, res, c, used);
            c.pop_back();
            used[i] = false;
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> c;
        vector<bool> used(nums.size(), false);

        sort(nums.begin(), nums.end());  
        backt(nums, res, c, used);
        
        return res;
    }
};
