#include <bits/stdc++.h>
using namespace std;

bool checkIfDivisible(int sum, int start, int end, vector<int> v){
    // bool isDivsible = false;

    for(int i = start; i <= end ; i++){
        if(sum % v[i] == 0) return true;
    }

    return false;
}

int main(){
    int n;
    cin>>n;

    vector<int> v(n);
    int cnt = 0;

    for(int i = 0 ; i < n ; i++){
        cin>>v[i];
    }

    for(int i = 0 ; i < n ; i++){
        int sum = 0;
        for(int j = i ; j < n ; j++){
            sum += v[j];

            if(!checkIfDivisible(sum, i, j, v)){
                cnt++;
            }
        }
    }

    cout<<cnt<<endl;

    return 0;
}