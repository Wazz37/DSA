class Solution {
public:
    int bfs(int source,unordered_map<int,bool> &vis,unordered_map<int,vector<int>> &adj){
        queue<int> q;
        q.push(source);
        int ans = 1;
        while(!q.empty()){
            int node = q.front();
            vis[node]=true;
            q.pop();
            for(auto child : adj[node]){
                if(!vis[child]){
                    q.push(child);
                    vis[child]=true;
                    ans++;
                }
            }
        }
        return ans;
    }
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,bool> mp;
        for(auto it:nums)
            mp[it]=true;
        unordered_map<int,vector<int>> adj;
        unordered_map<int,bool> vis;
        for(auto it:nums){
            if(mp[it - 1]){
                adj[it].push_back(it - 1);
            }
            if(mp[it + 1]){
                adj[it].push_back(it + 1);
            }
        }
        
        int ans = 0;
        for(auto it:nums){
            int count = 0;
            if(!vis[it])
                count = bfs(it,vis,adj);
            ans = max(ans,count);
        }
        return ans;

        
    }
};