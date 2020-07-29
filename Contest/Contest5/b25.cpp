/*
    Note:	Đếm số cách bước bậc thang. mỗi lần bước tối đa k bước

    đây là bài k-bonaci <tương tự fibonaci>

    với n < k   =>  F[n] = F[n-1] + f[n-2] + ... + F[1] + F2
    với n > k   =>  F[n] = F[n-1] + F[n-2] + ... + F[n-k+1] + F[n-k]

*/

#include<bits/stdc++.h>
#include<iostream>
#define xxxxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll; 
const ll MAX = 1E7 + 5;
const ll mod = 1E9 + 7;

int n , k =3;
ll dp[MAX];
void Init(){
    cin >> n;
}

void Proc(){
    dp[1]=dp[2]=dp[3] = dp[0] = 1;
    for(int i=2; i<= n; ++i){
        dp[i] = 0;
        for(int j=i-1; j >= 0 && j >= i - k ; --j){
            dp[i] = (dp[i] + dp[j]);
        }
    }
    cout << dp[n] <<endl;
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