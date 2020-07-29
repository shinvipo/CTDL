/*
    Note:	Toongr binh phuong
*/

#include<bits/stdc++.h>
#include<iostream>
#define xxxxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll; 
typedef unsigned long long ull; 
const ll MAX = 1E7 + 5;
const ll mod = 1E9 + 7;
ll n;
void Init(){
    cin >> n;
    int* dp = new int[n + 1]; 
  
    dp[0] = 0; 
    dp[1] = 1; 
    dp[2] = 2; 
    dp[3] = 3; 

    for (int i = 4; i <= n; i++) { 
        dp[i] = i; 
        for (int x = 1; x <= ceil(sqrt(i)); x++) { 
            int tmp = x * x; 
            if (tmp > i) 
                break; 
            else
                dp[i] = min(dp[i], 1 + dp[i - tmp]); 
        } 
    } 
    int res = dp[n]; 
    delete[] dp; 
    cout << res <<endl; 
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