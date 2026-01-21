#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, edg;
    cin>>n>>edg;

    vector<pair<int,int>> edge;

    for(int i = 0 ; i < edg ; i++){
        int u, v;
        cin>>u>>v;

        edge.push_back({u-1, v-1});
    }

    int min_cnt = edg;
    for(int i = 0 ; i < 1 << n ; i++){
        int cnt = 0;

        for(auto& [u,v]: edge){
            int u_cnt = (i >> u) & 1;
            int v_cnt = (i >> v) & 1;
            if(u_cnt == v_cnt)
                    cnt++;
        }

        min_cnt = min(cnt, min_cnt);
    }

    cout<<min_cnt<<endl;

    return 0;
}