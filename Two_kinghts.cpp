#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll i;
    cin >> i;
    for(ll n = 1; n <= i; n++)
        cout << (n*n*(n*n - 1)-8-24-(n-4)*16-16-(n-4)*24-(n-4)*8*(n-4))/2 << endl;
}


