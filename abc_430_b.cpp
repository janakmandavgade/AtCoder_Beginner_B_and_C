#include <bits/stdc++.h>
using namespace std;

string get_pattern(vector<vector<string>> v, int block_size, int n, int start_i, int start_j){
    string pattern = "";
    for(int i = start_i ; i < start_i + block_size ; i++){
        for(int j = start_j ; j < start_j + block_size ; j++){
            // string s = sto
            pattern.push_back((char)(v[i][j].at(0)));
        }
    }
    return pattern;
}

int find_patterns(vector<vector<string>> v, int block_size){
    int n = v.size();

    unordered_set<string> st;

    // for(int k = 0 ; k < )

    for(int i = 0 ; i < n - block_size ; i++){
        for(int j = 0 ; j < n - block_size ; j++){
            string pattern = get_pattern(v, block_size, n, i, j);
            st.insert(pattern);
        }
    }
    return st.size();
}

int main(){
    int n, block_size;
    cin>>n>>block_size;

    vector<vector<string>> v(n, vector<string> (n));

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cin>>v[i][j];
        }
    }

    int ans = find_patterns(v, block_size);
    cout<<ans<<endl;
    return 0;
}