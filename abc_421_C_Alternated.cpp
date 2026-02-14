#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;

    string s;
    cin>>s;

    ll i = 0;
    ll cnt_1s = 0;

    ll d1 = 0;
    ll d2 = 0;

    for(ll i = 0 ; i < 2 * n ; i++){
        //d1 for 1, 3, 5 and d2 for 2, 4, 6
        if(s[i] == 'A'){
            d1 += abs(i - (2 * cnt_1s));
            d2 += abs(i - (2 * cnt_1s + 1));
            cnt_1s++;
        }
    }

    cout<<min(d1, d2)<<endl;
    return 0;
}