#include <iostream>
using namespace std;
#include <queue>

class Graph
{
public:
    int g[6][6];

    Graph()
    {
        int temp[6][6] = {{0, 1, 1, 0, 0, 0},
                          {1, 0, 0, 0, 1, 0},
                          {1, 0, 0, 1, 0, 0},
                          {0, 0, 1, 0, 0, 1},
                          {0, 1, 0, 0, 0, 0},
                          {0, 0, 0, 1, 0, 0}};
        for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < 6; j++)
            {
                g[i][j] = temp[i][j];
            }
        }
    }

    void bfs(int start)
    {
        queue<int> q;
        bool visited[6] = {false};
        q.push(start);
        visited[start] = true;

        while (!q.empty())
        {
            int current = q.front();
            q.pop();
            cout << current << "  ";

            for (int i = 0; i < 6; i++)
            {
                if (g[current][i] == 1 && !visited[i])
                {
                    visited[i] = true;
                    q.push(i);
                }
            }
        }
    }
};

int main()
{
    Graph g;
    g.bfs(0);
}
