#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int find(int i, vector<int> &parent)
{
    if (i == parent[i])
    {
        return i;
    }
    return parent[i] = find(parent[i], parent);
}

bool Union(int x, int y, vector<int> &parent, vector<int> &Size, int& largest)
{
    int x_parent = find(x, parent);
    int y_parent = find(y, parent);

    if (x_parent == y_parent)
    {
        return false;
    }

    if (Size[x_parent] > Size[y_parent])
    {
        parent[y_parent] = x_parent;
        Size[x_parent] += Size[y_parent];
        largest = max(largest,Size[x_parent]);
    }
    else if (Size[y_parent] > Size[x_parent])
    {
        parent[x_parent] = y_parent;
        Size[y_parent] += Size[x_parent];
        largest = max(largest,Size[y_parent]);
    }
    else
    {
        parent[x_parent] = y_parent;
        Size[y_parent] += Size[x_parent];
        largest = max(largest,Size[y_parent]);
    }
    return true;
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> parent(n + 1);
    vector<int> Size(n + 1, 1);

    for (int i = 1; i <= n; i++)
    {
        parent[i] = i;
    }

    int components = n;
    int largest = 1;

    while (m--)
    {
        int a, b;
        cin >> a >> b;

        if (Union(a, b, parent, Size,largest))
        {
            components--;
        }
        cout << components << " " << largest << "\n";
    }
    return 0;
}