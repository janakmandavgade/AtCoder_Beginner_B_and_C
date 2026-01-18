#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, k;
    cin>>n>>m>>k;

    vector<int> head(n), body(m);
    for(int i = 0 ; i < n ; i ++) cin>>head[i];
    for(int i = 0 ; i < m ; i ++) cin>>body[i];

    sort(head.begin(), head.end());
    sort(body.begin(), body.end(), greater<int> ());

    int i = n-1, j = 0;
    int cnt = 0;
    while(i >= 0 && j < m){
        // cout<<"Before::" << i << " " << j << endl;
        if(head[i] <= body[j]){
            cnt++;
            i--;
            j++;
        }else if(head[i] > body[j]){
            i--;
        }
        // cout<<head[i]<<" "<<body[j]<<endl;
        // cout<<"After::" << i << " " << j << endl;
        // cout<<cnt<<endl;
    }
    // if(j < m && head[0] <= body[j]){
    //     cnt++;
    // }
    if(cnt >= k){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}