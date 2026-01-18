#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, h;
    cin>>n>>h;

    vector<vector<int>> v(n, vector<int> (3, 0));

    for(int i = 0 ; i < n ; i++){
        cin>>v[i][0]>>v[i][1]>>v[i][2];
    }

    int lb = h, ub = h;

    int curr_time = 0;


    for(int i = 0 ; i < n ; i++){
        int time = v[i][0];
        int allowed_lb = v[i][1];
        int allowed_ub = v[i][2];
        
        ll del = 
        
        lb -= 1;
        ub += 1;
        

        if(lb < allowed_lb || ub > allowed_ub){
            cout<<"No"<<endl;
            return 0;
        }
    }

    cout<<"Yes"<<endl;
    
    return 0;
}