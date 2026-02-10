#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<vector<int>> adj(n + 1);
        vector<int> indegree(n + 1,0);
        vector<int> outdegree(n + 1,0);

        for(int i = 0; i < trust.size(); i++){
            int u = trust[i][0];
            int v = trust[i][1];

            adj[u].push_back(v);
            outdegree[u]++;
            indegree[v]++;
        }

        int node = -1;

        for(int i = 1; i <= n; i++){
            if(outdegree[i] == 0 && indegree[i] == n - 1){
                node = i;
            }
        }
        return node;
    }
};