#include <iostream>
#include <vector>

using namespace std;

string findOrder(vector<string> &words)
{
    vector<int> indegree(26, 0);
    int n = words.size();

    vector<vector<int>> adj(26);
    vector<bool> present(26, false);

    //    maine characters ko present ya phir true mark kr diya
    for (auto word : words)
    {
        for (char c : word)
        {
            present[c - 'a'] = true;
        }
    }

    //    ab graph build kiya maine

    for (int i = 0; i < n - 1; i++)
    {
        string s1 = words[i];
        string s2 = words[i + 1];

        if (s1.size() < s2.size() && s1.substr(0, s2.size()) == s2)
        {
            return "";
        }

        for (int j = 0; j < min(s1.size(), s2.size()); j++)
        {
            if (s1[j] != s2[j])
            {
                adj[s1[j] - 'a'].push_back(s2[j] - 'a');
                indegree[s2[j] - 'a']++;
                break;
            }
        }
    }

    // ab topological sort laga denge ek dum copy paste

    queue<int> q;
    for (int i = 0; i < 26; i++)
    {
        if (present[i] && indegree[i] == 0)
        {
            q.push(i);
        }
    }

    string ans = "";

    while (!q.empty())
    {
        int frontNode = q.front();
        q.pop();
        ans += char(frontNode + 'a');

        for (auto neighbour : adj[frontNode])
        {
            indegree[neighbour]--;
            if (indegree[neighbour] == 0)
            {
                q.push(neighbour);
            }
        }
    }
    int totalChar = 0;
    for (int i = 0; i < 26; i++)
    {
        if (present[i])
            totalChar++;
    }
    if (ans.size() != totalChar){
        return "";
    }
    return ans;
}

int main()
{
}