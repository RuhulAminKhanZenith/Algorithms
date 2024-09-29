#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, E;
    cin >> N >> E;
    int mat[N][N];
    memset(mat, 0, sizeof(mat));
    while (E--)
    {
        int a, b;
        cin >> a >> b;
        mat[a][b] = 1;
        mat[a][a] = 1;

    }
    int Q;
    cin >> Q;
    while(Q--){
        int A, B;
        cin >> A >> B;

        if(mat[A] == mat[B]){
            cout << "YES" << endl;
            continue;
        }

        if (mat[A][B] == 1 )
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    }

    return 0;
}
