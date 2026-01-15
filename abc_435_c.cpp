#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    vector<int> v(n);

    for(int i = 0 ; i < n ; i++){
        cin>>v[i];
    }

    int ans = v[0] - 1;;
    for(int i = 0 ; i < n ; i++){
        if(ans < i){
            cout<<i<<endl;
            return 0;
        }

        ans = max(ans, i + v[i] - 1);
    }

    cout<<n<<endl;
    return 0;
}