#include <bits/stdc++.h>
using namespace std;

int recur(int i, vector<int> &v, vector<int> &par){
    if(i > par.size()){
        return -89000;
    }
    if(v[i] == i){
        par[i] = i;
        return i;
    }

    par[i] = recur(v[i], v, par);

    return par[i];
}

int main(){
    int n;
    cin>>n;

    vector<int> v(n+1);
    for(int i = 1 ; i <= n ; i++){
        cin>>v[i];
    }

    vector<int> par(n+1, -1);
    for(int i = 1 ; i <= n ; i++){
        if(par[i] == -1)
            recur(i, v, par);
    }

    for(int i = 1 ; i <= n ; i++) cout<<par[i]<<" ";
    cout<<endl;
}