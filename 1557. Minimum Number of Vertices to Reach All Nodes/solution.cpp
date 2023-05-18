class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int>ans;
        vector<bool>isable(n,true);
        for(auto i:edges){
            isable[i[1]]=false;
        }
        for(int i=0;i<n;i++){
            if(isable[i])ans.push_back(i);
        }
        return ans;
    }
};
