//CODE FOR NUMBER OF WAY 2 KNIGHTS CAN BE PLACED ON AN (KxK) : K = [1,N], CHESSBOARD SO THEY CANNOT ATTACK EACH OTHER
// COPYRIGHT CONTENT BY: DEVANSH DUBEY
//  BELOW CODE IS FOR HELP PURPOSE ONLY.
//   RECOMMENDED TO CODE IT BY YOURSELF
//    THANKS FOR YOUR VISIT :)

 //  FOLLOWING IS THE SOLUTION FOR "Two Knights" FROM CSES:   REFER TO THE LINK  ->   https://cses.fi/problemset/task/1072


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


