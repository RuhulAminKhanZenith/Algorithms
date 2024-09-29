#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> d = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
vector<vector<char>> a;
vector<vector<bool>> vis;
int n, m;

bool Valid(int i, int j) {
    return (i >= 0 && i < n && j >= 0 && j < m && a[i][j] == '.' && !vis[i][j]);
}

void dfs(int si, int sj) {
    vis[si][sj] = true;

    for (auto dir : d) {
        int ci = si + dir.first;
        int cj = sj + dir.second;

        if (Valid(ci, cj)) {
            dfs(ci, cj);
        }
    }
}

int main() {
    cin >> n >> m;

    a.resize(n, vector<char>(m));
    vis.resize(n, vector<bool>(m, false));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    int apartment = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == '.' && !vis[i][j]) {
                apartment++;
                dfs(i, j);
            }
        }
    }

    cout << apartment << endl;

    return 0;
}

