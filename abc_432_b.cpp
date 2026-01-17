#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    sort(s.begin(), s.end());

    if(s[0] == '0'){
        int i;
        for(i = 0 ; i < s.size() ; i++){
            if(s[i] != '0'){
                break;
            }
        }
        swap(s[0], s[i]);
    }
    cout<<s<<endl;
    return 0;
}