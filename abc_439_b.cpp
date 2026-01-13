#include <bits/stdc++.h>
using namespace std;

int sum_of_pow(int n)
{
    int tmp = n;
    int sum = 0;

    while (tmp != 0)
    {
        int r = tmp % 10;
        sum = sum + pow(r, 2);
        tmp = tmp / 10;
    }
    // cout<<"Sum of squares is: " << sum << endl;
    return sum;
}

int main()
{
    int n;
    cin >> n;

    unordered_map<int, int> seen;

    while (n >= 1)
    {
        int tmp = sum_of_pow(n);
        
        if(tmp == 1) break;

        if(seen.find(tmp) != seen.end())
        {
            cout << "No" << endl;
            return 0;
        }

        seen[tmp]++;
        n = tmp;
    }

    // if(f == false) cout<<"false"<<endl;
    cout<<"Yes"<<endl;
    return 0;
}