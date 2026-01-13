#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

void fn(){
    ll n;
    cin>>n;

    vector<ll> v(n, 0);
    ll tot_strength = 0;
    for(ll i = 0 ; i < n ; i++){
        ll w, s;
        cin>>w>>s;

        v[i] = w + s;
        tot_strength += s;
    }

    sort(v.begin(), v.end()); //nlogn

    // for(ll i = 0 ; i < n ; i++){
    //     cout<<"Index: " << i << " w=" << v[i][0] << " strength=" << v[i][1] << endl;
    // }

    ll pull = 0, sit = n - 1;
    // ll tot_wt = 0, tot_strength = 0;
    
    ll curr_str = 0;
    ll riders = 0;

    for(int i = 0 ; i < n ; i++){
        if(curr_str + v[i] <= tot_strength){
            riders++;
            curr_str += v[i];
        }else{
            break;
        }
    }

    cout << riders << endl;

}

int main(){
    ll t;
    cin>>t;

    while(t--){
        fn();
    }
    return 0;
}