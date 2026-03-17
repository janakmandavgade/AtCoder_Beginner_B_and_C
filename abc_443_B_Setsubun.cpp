#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll curr_age, max_buns_to_be_eaten;
    cin>>curr_age>>max_buns_to_be_eaten;

    ll buns = 0, ans = 0;

    while(buns < max_buns_to_be_eaten){
        buns += curr_age;
        curr_age++;
        ans++;
    }


    cout<<ans-1<<endl;

    return 0;
}