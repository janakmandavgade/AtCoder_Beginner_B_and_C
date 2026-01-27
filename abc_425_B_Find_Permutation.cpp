#include <bits/stdc++.h>
using namespace std;

void printvec(vector<int>& v){
    for(int i = 0 ; i < v.size() ; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;

    vector<int> v(n);
    map<int,int> mpp;
    for(int i = 0 ; i < n ; i++){
        cin>>v[i];
        if(mpp.find(v[i]) != mpp.end()){
            cout<<"No"<<endl;
            return 0;
        }
        if(v[i] != -1)
            mpp[v[i]] = i;
    }
    cout<<"Yes"<<endl;
    for(int i = 0 ; i < n ; i++){
        if(v[i] == -1){
            for(int k = 1 ; k <= n ; k++ ){
                if(mpp.find(k) == mpp.end()){
                    v[i] = k;
                    mpp[v[i]] = k;
                    break;
                }
            }
        }
    }

    printvec(v);

    return 0;
}