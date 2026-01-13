#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;
    vector<ll> freq(n+1, 0);
    for(ll x = 1 ; x * x * 2 < n ; x++){
        for(ll y = x + 1 ; ; y++){
            ll val = x * x + y * y;
            if (val > n) break; // Stop y loop if we exceed N
            freq[val]++;
        }
    }
    
    vector<ll> good_integers;
    for (ll i = 1; i <= n; i++) {
        if (freq[i] == 1) {
            good_integers.push_back(i);
        }
    }

    // 4. Final Output
    cout << good_integers.size() << "\n";
    for (int i = 0; i < good_integers.size(); i++) {
        cout << good_integers[i] << (i == good_integers.size() - 1 ? "" : " ");
    }
    cout << endl;

    return 0;
}