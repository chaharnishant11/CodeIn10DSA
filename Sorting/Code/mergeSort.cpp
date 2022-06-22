class Solution {
public:
    vector<int> merge(vector<int> &A, vector<int>& B){
        int sizeA=A.size();
        int sizeB=B.size();
        int i=0;
        int j=0;
        vector<int> ans;
        
        //Compare and fill ans vector
        while (i<sizeA && j<sizeB){
            if(A[i]<B[j]){
                ans.push_back(A[i]);
                i=i+1;
            } else{
                ans.push_back(B[j]);
                j=j+1;
            }
        }
        
        //Add remaining elements from A
        while(i<sizeA){
            ans.push_back(A[i]);
            i=i+1;
        }
        
        //Add remaining elements from B
        while(j<sizeB){
            ans.push_back(B[j]);
            j=j+1;
        }
        
        return ans;
    
    }
    
    vector<int> mergeSort(vector<int>& nums,int start, int end) {
        //Base Case
        if (start>end){
            return {};
        }
        if (start==end){
            return {nums[start]};
        }
        
        //Calculate Mid
        int mid= start+(end-start)/2;
            
        //MergeSortCall
        vector<int> A = mergeSort(nums,start,mid);
        vector<int> B = mergeSort(nums,mid+1,end);
        
        //MergeCall
        return merge(A,B);
    }
    
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
        return mergeSort(nums,0,n-1);
    }
};