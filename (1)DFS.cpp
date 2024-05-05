#include <iostream>
#include <stack>
using namespace std;
class Graph
{
public:
    int g[6][6];
    int ls[5];
    Graph()
    {int temp[6][6] = {
            {0, 1, 1, 0, 0, 0},{1, 0, 0, 0, 1, 0},{1, 0, 0, 1, 0, 0},{0, 0, 1, 0, 0, 1},{0, 1, 0, 0, 0, 0},{0, 0, 0, 1, 0, 0}};
        for (int i = 0; i < 6; i++)
        {for (int j = 0; j < 6; j++)
            {g[i][j] = temp[i][j]; } }}
    void dfs(int start)
    {stack<int> s;
        s.push(start);
        bool visited[6] = {false};
        while (!s.empty())
        { int current = s.top();
            s.pop();
            if (!visited[current])
            {visited[current] = true;
                cout << current << "  ";
                for (int i = 5; i >= 0; i--)
                {if (g[current][i] == 1 && !visited[i])
                    { s.push(i); }
                }}}}};
int main()
{   Graph g;
    g.dfs(1);}
