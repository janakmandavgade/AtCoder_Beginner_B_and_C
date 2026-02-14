#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;

    if(s[0] == s[1]){
        cout<<s[2]<<endl;
    }else if(s[0] == s[2]){
        cout<<s[1]<<endl;
    }else{
        cout<<s[0]<<endl;
    }
    return 0;
}