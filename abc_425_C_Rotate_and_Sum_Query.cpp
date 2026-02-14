#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,q;
    cin>>n>>q;

    vector<ll> v(2*n);
    for(ll i = 0 ; i < n ; i++){
        cin>>v[i];
        v[n+i] = v[i];
    }

    vector<ll> ps(2*n);
    ps[0] = v[0];

    for(ll i = 1 ; i < 2*n ; i++){
        ps[i] = ps[i-1] + v[i];
    }

    ll rotations = 0;

    while(q--){
        ll type;
        cin>>type;
        if(type == 1){
            ll rotated_by;
            cin>>rotated_by;
            rotations += rotated_by;
        }else if(type == 2){
            ll l,r;
            cin>>l>>r;
            l--; r--;
            rotations = rotations % n;
            if(l + rotations == 0) cout<<ps[r]<<endl;
            else cout<<ps[r + rotations] - ps[l + rotations - 1] << endl;
        }
    }

    return 0;
}