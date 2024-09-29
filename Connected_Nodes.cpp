
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> mat[n];
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }
    int Q;
    cin >> Q;
    while(Q--) {
        int X;
        cin >> X;
        if (mat[X].empty())
            cout << -1 ;
        else
        sort(mat[X].begin(), mat[X].end(), greater<int>());
        for(int i : mat[X]){
            cout << i <<" ";
        }
        cout<<endl;
    }

    return 0;
}
