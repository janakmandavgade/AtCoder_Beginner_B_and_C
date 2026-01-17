#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, n, q;
    cin>> x >> n;

    vector<int> w(n);
    for(int i = 0 ; i < n ; i++){
        cin>>w[i];
    }

    cin>>q;
    int sum = x;
    unordered_set<int> st;
    // cout<<"Here"<<endl;
    for(int i = 0 ; i < q ; i++){
        int query;
        cin>>query;
        query = query - 1;
        if(st.count(query)){
            st.erase(query);
            sum -= w[query];
        }else{
            st.insert(query);
            sum += w[query];
        }
        cout<<sum<<endl;
    }

    return 0;
}