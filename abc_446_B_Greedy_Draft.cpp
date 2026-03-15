#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <unordered_map>
using namespace std;

typedef long long int ll;

int main(){
    int t, m;
    cin>>t>>m;
    unordered_map<int,int> mpp;
    while(t--){
        int n;
        cin>>n;

        vector<int> v(n);
        for(int i = 0 ; i < n ; i++) cin>>v[i];

        bool isbreak = false;
        for(int i = 0 ; i < n ; i++){
            if(mpp.find(v[i]) == mpp.end()){
                cout<<v[i]<<endl;
                mpp[v[i]]++;
                isbreak = true;
                break;
            }
        }
        if(!isbreak) cout << 0 << endl;
    }
    // for(auto [k, v]: mpp){
    //     cout<<v<<endl;
    // }
    return 0;
}