class Solution {
public:
    vector<vector<int>> ans;
    
    void helper(vector<int>& candidates, int target,int i,int curSum, vector<int> temp){
        // Bounding Condition
        if (curSum>target){
            return;
        }
        // Base Condition
        if (i==candidates.size()){
            if(curSum==target){
                ans.push_back(temp);
            }
            return;
        }
        // Inclusion
        curSum+=candidates[i];
        temp.push_back(candidates[i]);
        helper(candidates,target,i,curSum,temp);
        curSum-=candidates[i];
        temp.pop_back();
        
        // Exclusion
        helper(candidates,target,i+1,curSum,temp);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        helper(candidates,target,0,0,temp);
        return ans;
        
    }
};