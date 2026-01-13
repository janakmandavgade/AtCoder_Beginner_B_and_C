#include <bits/stdc++.h>
using namespace std;

int main(){

    int h, w, n;
    cin>>h>>w>>n;
    vector<vector<int>> v(h, vector(w, 0));
    
    for(int i = 0 ; i < h ; i++){
        for(int j = 0 ; j < w ; j++){
            cin>>v[i][j];
        }
    }
    
    unordered_map<int,int> mpp;

    for(int i = 0 ; i < n ; i++){
        int var;
        cin>>var;
        mpp[var]++;
    }
    int ans = INT_MIN;
    for(int i = 0 ; i < h ; i++){
        int cnt = 0;
        for(int j = 0 ; j < w ; j++){
            if(mpp.find(v[i][j]) != mpp.end()){
                cnt++;
            }
        }
        ans = max(cnt, ans);
    }
    cout<<ans<<endl;
    return 0;
}