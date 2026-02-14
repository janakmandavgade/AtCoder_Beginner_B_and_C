#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    vector<string> v(t);
    int mx_size = INT_MIN;
    for(int i = 0 ; i < t ; i++){
        cin>>v[i];
        // cout<<v[i]<<endl;
        mx_size = max(mx_size, (int)v[i].size());
    }
    // cout<<
    for(int i = 0 ; i < t ; i++){
        int dots = (mx_size - v[i].size())/2;
        string ans = "";
        for(int j = 0 ; j < dots ; j++){
            ans += '.';
        }
        ans += v[i];
        for(int j = 0 ; j < dots ; j++){
            ans += '.';
        }

        v[i] = ans;
    }

    for(int i = 0 ; i < t ; i++){
        cout<<v[i]<<endl;
    }

}