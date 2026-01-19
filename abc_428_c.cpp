#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int Q;
    cin >> Q;

    // stack stores: {min_balance_at_this_point, current_balance_at_this_point}
    stack<pair<int, int>> st;

    while (Q--) {
        int type;
        cin >> type;

        if (type == 1) {
            char c;
            cin >> c;
            
            // Get previous values to calculate new ones
            int prev_min = st.empty() ? 0 : st.top().first;
            int prev_bal = st.empty() ? 0 : st.top().second;
            
            int cur_bal = prev_bal + (c == '(' ? 1 : -1);
            int cur_min = min(prev_min, cur_bal);
            
            st.push({cur_min, cur_bal});
        } else {
            if (!st.empty()) {
                st.pop();
            }
        }

        // Check if good: Empty string OR (balance == 0 AND min_balance == 0)
        if (st.empty()) {
            cout << "Yes\n";
        } else {
            pair<int, int> top = st.top();
            if (top.first == 0 && top.second == 0) {
                cout << "Yes\n";
            } else {
                cout << "No\n";
            }
        }
    }
    return 0;
}