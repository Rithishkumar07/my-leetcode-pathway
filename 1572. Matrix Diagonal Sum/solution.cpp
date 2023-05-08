class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat){
        int s=0,n=mat[0].size();
        for(int i=0;i<n;i++){
            if(i!=n-i-1)s+=mat[i][i]+mat[i][n-i-1];
            else s+=mat[i][i];
        }
        return s;
    }
};
