#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<vector<int>> v(n, vector<int>(n, -1));

    int r = 0, c = (n - 1) / 2;
    v[r][c] = 1;
    // cout << r << " " << c << endl;
    for (int i = 0; i < (n * n) - 1; i++)
    {
        int k = v[r][c];
        // cout<< "Row and Col: " << ((r - 1) % n) << " " << ((c + 1) % n) << endl;
        if (v[(r - 1 + n) % n][abs(c + 1) % n] == -1)
        {
            v[(r - 1 + n) % n][(c + 1) % n] = k + 1;
            r = (r - 1 + n) % n;
            c = abs(c + 1) % n;
        }
        else
        {
            v[abs(r + 1) % n][c] = k + 1;
            r = abs(r + 1) % n;
        }
        // cout<< "Row: " << r << " Col: " << c << endl;
        k = k + 1;
    }

    for (auto &it : v)
    {
        for (auto &ele : it)
        {
            cout << ele << " ";
        }
        cout << endl;
    }

    return 0;
}