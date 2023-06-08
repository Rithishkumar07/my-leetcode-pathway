class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans = 0;
        for(auto i : grid){
            int l = 0, r = i.size()-1;
            if(i[0]<0) ans += r+1;
            else if(i[r] > 0) ans += 0;
            else {
                while(l<=r){
                    int mid=(l+r)/2;
                    if(i[mid]<0 and i[mid-1]>=0){
                        ans+=i.size()-mid;
                        break;
                    }
                    else if(i[mid]<0)r=mid-1;
                    else{
                        l=mid+1;
                    }
                }
            }
        }
        return ans;
    }
};
