class Solution {
public:
    long long recur(vector<vector<int>>&ques,int ind,int len,vector<long long>&dp){
        if(ind>=len)return 0;
        if(dp[ind]!=-1)return dp[ind];
        long long include=ques[ind][0]+recur(ques,ind+ques[ind][1]+1,len,dp);
        long long exclude=recur(ques,ind+1,len,dp);
        return dp[ind]=max(include,exclude);
    }
    long long mostPoints(vector<vector<int>>& questions) {
        vector<long long>dp(questions.size(),-1);
        return recur(questions,0,questions.size(),dp);
    }
};
