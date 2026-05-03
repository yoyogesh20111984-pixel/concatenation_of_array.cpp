class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(2 * n);
        
        int k = 0;
        for (int i = 0; i < n; i++) {
            ans[k] = nums[i];
            k++;
        }

        for (int i = 0; i < n; i++) {
            ans[k] = nums[i];
            k++;
        }

        return ans;
    }
};
