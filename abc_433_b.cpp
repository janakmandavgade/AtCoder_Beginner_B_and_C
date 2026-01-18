#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    vector<int> v(n, 0);

    for(int i = 0 ; i < n ; i ++){
        cin>>v[i];
    }

    //4
    // 4 3 2 5

    for(int i = 0 ; i < n ; i ++){
        int mx_ele = -1;
        for(int j = 0 ; j < i; j++){
            // cout<<v[j] << " " << v[i] << " " << mx_ele <<endl; 
            if(v[j] > v[i]){
                mx_ele = j;
            }
        }
        int ans = (mx_ele == -1) ? mx_ele : mx_ele+1;
        cout << ans << endl;
    }
    cout<<endl;
    
}