#include <iostream>
#include <vector>
#include <queue>
#define max 20
using namespace std;

class graph
{
  vector<int> adj[max];
public:
  vector<int> bfs(vector<int> g[], int v)
  {
    int visited[v] = {0};
    queue<int> q;
    q.push(0);
    visited[0] = 1;
    vector<int> ans;
    while (!q.empty())
    {
      int node = q.front();
      q.pop();
      ans.push_back(node);
      for (auto i : g[node])
      {
        if (!visited[i])
        {
          visited[i] = 1;
          q.push(i);
        }
      }
    }
    return ans;
  }
};

int main()
{
   vector<int> g[10];
   
  return 0;
}