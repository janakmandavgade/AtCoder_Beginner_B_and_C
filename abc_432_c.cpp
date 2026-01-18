#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n, x, y;
    cin>>n>>x>>y;

    ll mn = LLONG_MAX;

    vector<ll> c(n);
    for(ll i = 0 ; i < n ; i++){
        cin>>c[i];
        mn = min(c[i], mn);
    }
    ll sum = 0;
    for(ll i = 0 ; i < n ; i++){
        ll num = (c[i] - mn) * x;
        ll den = y - x;
        
        if(num % den != 0){
            cout<<-1<<endl;
            return 0;
        }

        if(num/den > mn){
            cout<<-1<<endl;
            return 0;
        }

        sum += (mn - (num/den));
    }

    cout<<sum<<endl;


    return 0;
}