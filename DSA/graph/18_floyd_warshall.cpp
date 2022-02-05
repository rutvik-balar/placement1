#include <iostream>
using namespace std;

#define INF 999
void floydWarshall(int graph[][4])
{
    for (int k = 0; k < 4; k++)
    {
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                if (graph[i][k] + graph[k][j] < graph[i][j])
                    graph[i][j] = graph[i][k] + graph[k][j];
            }
        }
    }
}

int main()
{
    int graph[4][4] = {{0, 3, INF, 7},
                       {8, 0, 2, INF},
                       {5, INF, 0, 1},
                       {2, INF, INF, 0}};

    floydWarshall(graph);

    // print graph
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                if (graph[i][j] == INF)
                    cout << "INF";
                else
                    cout << graph[i][j];
            }
            cout << "\n";
        }
}