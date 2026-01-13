#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    vector<int> v(n);

    for(int i = 0 ; i < n ; i++){
        cin>>v[i];
    }
    // int i = 0;
    int ans = 1;
    for(int i = 0 ; i < n ; i++){
        if(i >= ans){
            cout<< i <<endl;
            return 0;
        }

        ans = max(ans, i+v[i]);
    }

    cout<<n<<endl;
    // if(ans == 0) cout<<1<<endl;
    // else cout<<ans<<endl;
    return 0;
}