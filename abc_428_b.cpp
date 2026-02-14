#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin>>n>>k;

    string s;
    cin>>s;

    map<string, int> mpp;
    int max_occur = 0;
    for(int i = 0 ; i < n - k + 1; i++){
        string match = s.substr(i, k);
        mpp[match]++;
        max_occur = max(mpp[match], max_occur);
    }
    cout<<max_occur<<"\n";
    if(max_occur > 0){
        for (auto [key, value] : mpp){
            if(value == max_occur) cout<<key<<" ";
        }
        cout<<endl;
    }
    return 0;
}