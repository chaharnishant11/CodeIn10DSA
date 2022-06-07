class Solution {
public:
    vector<vector<int>> ans;
    void helper(vector <int>& nums, int i){
        if (i==nums.size()){    // Base Case
            ans.push_back(nums);
            return;
        }
        for (int j=i;j<nums.size();j++){
            swap(nums[i],nums[j]);
            helper(nums,i+1);
            // backtrack
            swap(nums[i],nums[j]);
        }
        return;
        
    }
    vector<vector<int>> permute(vector<int>& nums) {
        helper(nums,0);
        return ans;
    }
};
