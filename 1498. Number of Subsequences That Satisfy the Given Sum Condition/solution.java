class Solution {
    public int numSubseq(int[] nums, int target) {
        Arrays.sort(nums);
        int right=nums.length-1;
        int mod = 1000000007;
        int ans=0;
        int power[]=new int[right+1];
        power[0]=1;
        for(int i=1;i<right+1;i++){
            power[i]=(power[i-1]<<1)%mod;
            }
        for(int left=0;left<nums.length;left++){
            while(left<=right&&nums[left]+nums[right]>target)right--;
            if(left<=right){
                ans=(ans+power[right-left])%mod;
            }
        }
        return (int)ans;
    }
}
