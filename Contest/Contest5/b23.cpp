// Longest Increment Subarray => LIS
// O(nlogn)
#include<bits/stdc++.h>
#include<iostream>
#define xxxxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll; 
const ll MAX = 2005;
const ll mod = 1E9 + 7;

int n,a[MAX],dp[MAX],res = 0;

void Init(){
    cin >> n ;
    res = 0;
    for(int i = 0 ; i < n ; i++) cin >> a[i];
}

void Proc(){
    for(int i = 0; i < n ; i++){
        dp[i] = 1;
        for(int j = 0 ; j < i ; j++){
            if(a[j] <= a[i] && dp[j] + 1 > dp[i])
                dp[i] = dp[j] + 1;
        }
    }
    res = *max_element(dp,dp + n);
    cout << n - res << '\n';
}

int main(){
    xxxxx
    int t=1; 
    while(t--){
        Init();
        Proc();
    }
    return 0;
}

/* ==> Shin <== */