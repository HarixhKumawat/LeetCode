// 30-12-2022

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution
{
    

public:
    vector<vector<int>> paths;
    void nextt1(vector<vector<int>> &graph, int loc, vector<int> temp)
    {
        for (int i = 0; i < graph[loc].size(); i++)
        {
            cout<< loc;
            if (find(temp.begin(), temp.end(), loc) == temp.end())
                temp.push_back(loc);
            nextt1(graph, graph[loc][i], temp);
        }
        if (loc == graph.size() - 1)
        {
            if (find(temp.begin(), temp.end(), loc) == temp.end())
                temp.push_back(loc);
            paths.push_back(temp);
        }

        temp.clear();
    }

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>> &graph)
    {
        vector<int> temp = {0};

        nextt1(graph, 0, temp);
        for (vector<int> i : paths)
        {
            for (int j : i)
            {
                cout << j << "->";
            }
            cout << endl;
        }
        
        return paths;
    }
};

int main()
{
    Solution s1;
    vector<vector<int>> graph = {{4, 3, 1}, {3, 2, 4}, {3}, {4}, {}};
    vector<vector<int>> sumof = s1.allPathsSourceTarget(graph);
    /* for(vector<int> i: sumof) {
        for(int j: i) {
            cout<< j << "->";
        }
        cout<< endl;
    }*/
}