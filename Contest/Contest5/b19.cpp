/*
    Note:	 KÝ TỰ GIỐNG NHAU
    Giả sử bạn cần viết N ký tự giống nhau lên màn hình. Bạn chỉ được phép thực hiện ba thao tác dưới đây với chi phí thời gian khác nhau:
*/

#include<bits/stdc++.h>
#include<iostream>
#define xxxxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll; 
typedef unsigned long long ull; 
const ll MAX = 1E7 + 5;
const ll mod = 1E9 + 7;
int ins, del , cop , N;
int dp[101];

void Init(){
    cin >> N;
    cin >> ins >> del >> cop;
}

void Proc(){
    dp[1]= ins;
    for(int i=1; i<= N; ++i){
        if(i % 2 == 0){
            dp[i] = min(dp[i-1] + ins,dp[i/2] + cop);
        }
        else{
            dp[i] = min(dp[i-1] + ins , dp[(i+1)/2] + cop + del);
        }
    }
    cout << dp[N] <<endl;
}

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