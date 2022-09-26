class dfs
{
    void dfsRecursion(vector<int> graph[], int source, vector<bool> &visited)
    {
        visited[source] = true;
        cout << source << " ";
        for (auto it : graph[source])
        {
            if (visited[it] == false)
            {
                dfsRecursion(graph, it, visited);
            }
        }
    }

public:
    void dfsTraversal(vector<int> graph[], int n, int source)
    {
        vector<bool> visited(n, false);
        for (int i = 0; i < n; i++)
        {
            cout << endl;
            if (visited[i] == false)
            {
                dfsRecursion(graph, i, visited);
            }
        }
    }
};
