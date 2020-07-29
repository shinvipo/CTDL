/*
    Note:	dp possible decoding 
*/

#include<bits/stdc++.h>
#include<iostream>
#define xxxxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll; 
typedef unsigned long long ull; 
const ll MAX = 1E7 + 5;
const ll mod = 1E9 + 7;

string num; int n;

void Init(){
    cin >> num;
    n = num.size();
    int dp[n+1];  
    dp[0] = 1; 
    dp[1] = 1; 
    if(num[0]=='0')   
        {cout << 0 <<endl;return; }
    for (int i = 2; i <= n; i++) 
    { 
        dp[i] = 0; 
        if (num[i-1] > '0') 
            dp[i] = dp[i-1]; 
        if (num[i-2] == '1' ||  
              (num[i-2] == '2' && num[i-1] < '7') ) 
            dp[i] += dp[i-2]; 
    } 
    cout << dp[n] << endl; 
}

void Proc(){}

int main(){
    xxxxx
    int t=1, mul_test = 1		; if(mul_test) cin >> t;
    while(t--){
        Init();
        Proc();
    }
    return 0;
}

/* ==> Shin <== */