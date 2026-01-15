#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    
    // type: <total_wt_sum, cnt>
    vector<vector<double>> v(m+1, vector<double> (2, 0));

    for(int i = 0 ; i < n ; i++){
        double type, wt;
        cin>>type>>wt;

        v[type] = {v[type][0] + wt, v[type][1] + 1};
        
    }

    for(int i = 1 ; i < m ; i++ ){
        cout<<(double)(v[i][0]/v[i][1])<<endl;
    }

    return 0;
}