#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    vector<int> v(n);
    unordered_map<int,int> mpp;
    for(int i = 0 ; i < n ; i++){
        cin>>v[i];
        mpp[v[i]]++;
    }

    int sum = 0;
    for(auto &it: mpp){
        // it.first, it.second
        int key = it.first;
        int val = it.second;

        int comb_2 = (val * (val-1))/2;
        int remove_all_same = n - val;

        sum += comb_2 * remove_all_same;
    }

    cout<<sum<<endl;

    return 0;
}