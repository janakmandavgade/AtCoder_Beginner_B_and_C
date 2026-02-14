#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin>>n>>q;
    // cout<<"Here"<<endl;
    vector<int> pc(n);
    for(int i = 0 ; i < n ; i++){
        pc[i]+= 1;
    }

    int o = 0;

    while(q--){
        int x,y;
        cin>>x>>y;
        x--;y--;
        if(o > x){
            cout<<0<<endl;
            continue;
        }else{
            int ans = 0;
            while(o <= x){
                ans += pc[o];
                pc[y] += pc[o];
                o++;
            }
            cout<<ans<<endl;
        }
    }

    return 0;
}