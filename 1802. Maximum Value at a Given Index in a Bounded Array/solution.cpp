class Solution {
public:
    int maxValue(int n, int index, int maxSum) {
        int low=1,high=maxSum,lsize=index,rsize=n-index-1,ans;
        while(low<=high){
            int mid=(low+high)>>1;
            long lsum=0,rsum=0,totsum=mid,uptosum=mid-1;
            if(uptosum>=rsize){
                rsum+=(uptosum*(uptosum+1))/2-((uptosum-rsize)*(uptosum-rsize+1))/2;
            }
            else rsum+=uptosum*(uptosum+1)/2+rsize-uptosum;
            if(uptosum>=lsize){
                lsum+=(uptosum*(uptosum+1))/2-(uptosum-lsize)*(uptosum-lsize+1)/2;
            }
            else lsum+=uptosum*(uptosum+1)/2+lsize-uptosum;

            totsum+=lsum+rsum;
            if(totsum>maxSum){
                high=mid-1;
            }
            else{
                low=mid+1;
                ans=mid;
            }
        }
        return ans;
    }
};
