#include<bits/stdc++.h>
typedef unsigned long long ll;
#define N 1000000007
using namespace std;

ll fact(ll n){
    ll sum = 1;
    for(ll i = 1; i <= n; i++){
        sum *= i;
    }
    return sum;
}

ll check(string s, int first, int prs){
    for(int i = first; i < prs; i++)
        if(s[i] == s[prs])
            return 0;
    return 1;
}

void permutation(string s, ll indx, ll n){
    if(indx >= n){
        cout << s << endl;
        return;
    }
    for(ll i = indx; i < n; i++){
        if(check(s, indx, i)){
            swap(s[indx], s[i]);
            permutation(s, indx+1, n);
            swap(s[indx], s[i]);
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    ll len = s.size(), freq[26] = {0}, i;
    for(i = 0; i < len; i++)
        freq[s[i] - 'a']++;
    ll res = fact(len);
    for(i = 0; i < len; i++){
        if(freq[s[i] - 'a'] != 0){
        res /= fact(freq[s[i] - 'a']); freq[s[i] - 'a'] = 0;}
    }
    cout << res << endl;
    permutation(s, 0, len);
}
