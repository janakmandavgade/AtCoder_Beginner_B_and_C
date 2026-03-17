#include <bits/stdc++.h>
#include <deque>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, d;
        cin >> n >> d;

        vector<int> a(n);
        vector<int> b(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        deque<pair<int, int>> dq;
        if (a[0] - b[0] > 0)
            dq.push_front({a[0] - b[0], 1});

        for (int i = 1; i < n; i++)
        {
            dq.push_back({a[i], i + 1});
            int demand = b[i];
            while (demand > 0 && !dq.empty())
            {
                int val = dq.front().first;
                int day = dq.front().second;
                dq.pop_front();

                if (val > demand)
                {
                    // We have more eggs than we need. Put the leftovers back.
                    dq.push_front({val - demand, day});
                    demand = 0; // We satisfied the demand
                }
                else
                {
                    // We used all these eggs, decrease our demand
                    demand -= val;
                }
            }

            while (!dq.empty() && (i - dq.front().second) + 1>= d)
            {
                dq.pop_front();
            }
        }
        int ans = 0;
        while (!dq.empty())
        {
            ans += dq.front().first;
            dq.pop_front();
        }
        cout << ans << endl;
    }

    return 0;
}