class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>order(n,vector<int>(n,0));
        int i=1,u=0,d=n-1,l=0,r=n-1,p=0;
        while (u <= d && l <= r) {
            for (int col = l; col <= r; col++) {
                order[u][col]=i++;
            }
            if (++u > d) {
                break;
            }
            for (int row = u; row <= d; row++) {
                order[row][r] = i++;
            }
            if (--r < l) {
                break;
            }
            for (int col = r; col >= l; col--) {
                order[d][col] = i++;
            }
            if (--d < u) {
                break;
            }
            for (int row = d; row >= u; row--) {
                order[row][l] =i++;
            }
            if (l++ > r) {
                break;
            }
        }
        return order;
    }
};
