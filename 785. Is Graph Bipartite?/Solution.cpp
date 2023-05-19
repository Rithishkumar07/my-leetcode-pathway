class Solution {

public:

    bool checker(int u,vector<int>&color,vector<vector<int>>&graph){

        queue<int>q;

        q.push(u);

        color[u]=0;

        while(!q.empty()){

            int a=q.front();

            q.pop();

            for(auto i:graph[a]){

                if(color[i]==-1){

                    q.push(i);

                    color[i]=!color[a];

                }

                else if(color[i]==color[a])return false;

            }

        }

        return true;

    }

    bool isBipartite(vector<vector<int>>& graph) {

        int n=graph.size();

        vector<int>color(n,-1);

        for(int i=0;i<n;i++){

            if(color[i]==-1){

                if(!checker(i,color,graph)){

                    return false;

                }

            }

        }

        return true;

    }

};
