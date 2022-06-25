class Solution{
    public:
    vector<string>ans;

    bool isSafe(vector<vector<int>> &m,vector<vector<int>> &visited,int srcx,int srcy,int n){
        if(srcx>=0 && srcy>=0 && srcx<n && srcy<n&&m[srcx][srcy]=-1&&!visited[srcx][srcy]){
            return true;
        }
        return false;I
   }

   void helper(vector<vector<int>> &m,vector<vector<int>> &visited,intn,int srcx,int srcy,string temp){
        if(srcx == n-1 && srcy == n-1){
            ans.push_back(temp);
            return;
        }
    visited[srcx][srcy]=1;
    if(isSafe(m,visited,srcx+1,srcy,n)){
        helper(m,visited,n,srcx+1,srcy,temp+"D");
    }
    if(isSafe(m,visited,srcx,srcy-1,n)){
        helper(m,visited,n,srcx,srcy-1,temp+"L");
    }
    if(isSafe(m,visited,srcx,srcy+1,n)){
        helper(m,visited,n,srcx,srcy+1,temp+"R");
    }
    if(isSafe(m,visited,srcx-1,srcy,n)){
        helper(m,visited,n,srcx-1,srcy,temp+"U");
    }
   visited[srcx][srcy]=0;
}
vector<string>findPath(vector<vector<int >>&m,intn){
    // Your code goes here
    if(m[0][0]==0)return ans;
    vector<vector<int >> visited(n,vector<int>(n,0));
    helper(m,visited,n,0,0,"");
    return ans;
]