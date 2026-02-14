#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;

    vector<int> v(n);

    int sum = 0;
    for(int i = 0 ; i < n ; i++){
        cin>>v[i];
        sum += v[i];
    }

    bool isPossible = false;
    for(int i = 0 ; i < n ; i++){
        if(sum - v[i] == m){
            cout<<"Yes"<<endl;
            isPossible = true;
            break;
        }
    }

    if(!isPossible){
        cout<<"No"<<endl;
    }

    return 0;
}