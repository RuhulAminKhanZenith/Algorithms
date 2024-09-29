#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
vector<vector<char>> a;
vector<vector<bool>> vis;
int n, m;
bool found = false;

bool valid(int i, int j) {
    return (i >= 0 && i < n && j >= 0 && j < m && a[i][j] != '#' && !vis[i][j]);
}

void dfs(int si, int sj) {
    if (a[si][sj] == 'B') {
        found = true;
        return;
    }

    vis[si][sj] = true;

    for (auto dir : d) {
        int ci = si + dir.first;
        int cj = sj + dir.second;

        if (valid(ci, cj)) {
            dfs(ci, cj);
        }

        if (found) return;
    }
}

int main() {
    cin >> n >> m;

    a.resize(n, vector<char>(m));
    vis.resize(n, vector<bool>(m, false));

    int start_x = -1, start_y = -1;
    int end_x = -1, end_y = -1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            if (a[i][j] == 'A') {
                start_x = i;
                start_y = j;
            }
            if (a[i][j] == 'B') {
                end_x = i;
                end_y = j;
            }
        }
    }

    dfs(start_x, start_y);

    if (found) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

