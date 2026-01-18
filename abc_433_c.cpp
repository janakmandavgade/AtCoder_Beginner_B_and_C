#include <bits/stdc++.h>
using namespace std;

// int find_substrs(int l, int r, int& cnt, string s, int n){
//     while(l >= 0 && r < n){
//         if(l-1 >= 0 && r + 1 < n && s[l - 1] == s[l] && s[r] == s[r+1] && ((s[l-1] - '1') + 1 == (s[r+1] - '1'))){
//             cnt++;
//             l--;
//             r++;
//         }else{
//             break;
//         }
//     }
//     // cout<<l << " " << r << endl;
//     if(s[l] + 1 == s[r]) {cnt++;}
//     return r-1;
// }

int main(){
    string s;
    cin>>s;
    int n = s.size();
    int cnt = 0;
    vector<pair<int,int>> v;
    v.push_back({s[0]-'0', 1});
    for(int i = 1 ; i < n ; i++){
        int num = v.back().first;
        if(num == s[i] - '0'){
            v.back().second++;
        }else{
            v.push_back({s[i]-'0', 1});
        }
    }
    
    int ans = v[0].second;
    for(int i = 1; i < v.size() ; i++){
        if(v[i-1].first + 1 == v[i].first){
            cnt += min(v[i-1].second, v[i].second);
        }
        // ans = min(ans, v[i].second);
    }

    cout<<cnt<<endl;
}