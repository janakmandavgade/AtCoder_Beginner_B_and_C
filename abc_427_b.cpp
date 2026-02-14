#include <bits/stdc++.h>
using namespace std;

int f(int num){
    int tmp = num;
    int sum = 0;
    while(tmp != 0){
        int rem = tmp %10;
        sum += rem;
        tmp = tmp/10;
    }
    return sum;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    int sum = 1;
    if(n == 1) {cout<<sum<<endl; return 0;}
    for(int i = 1 ; i < n ; i++){
        sum += f(sum);
        // cout<<sum<<endl;
    }
    cout<<sum<<endl;
    return 0;
}