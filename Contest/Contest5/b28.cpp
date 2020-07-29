/*
    Note:	BIẾN ĐỔI XÂU
    Nhiệm vụ của bạn là đếm số các phép Insert, Delete, Replace ít nhất thực hiện trên str1 để trở
thành str2
*/

#include<bits/stdc++.h>
#include<iostream>
#define xxxxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll; 
typedef unsigned long long ull; 
const ll MAX = 1E7 + 5;
const ll mod = 1E9 + 7;

void Init(){
    string a,b;
    cin >> a >> b;
    int m = a.size(), n = b.size();
    int dp[m+1][n+1];
    memset(dp,0,sizeof(dp));

    for(int i=0; i<= m; ++i)
        for(int j=0; j<=n; ++j){
            if(i == 0)
                dp[i][j] = j;
            else if(j == 0)
                dp[i][j] = i;
            else if (a[i-1] == b[j-1])
                dp[i][j] = dp[i-1][j-1];
            else
                dp[i][j] = min({dp[i-1][j],dp[i-1][j-1],dp[i][j-1]}) +1;
        }
    cout << dp[m][n] <<endl;
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