/*
    Note:	tìm đường đi từ ô (1, 1) tới ô (N, M) sao cho tổng điểm là nhỏ nhất.
    chỉ đi trái, phải, chéo dưới phải
*/

#include<bits/stdc++.h>
#include<iostream>
#define xxxxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll; 
typedef unsigned long long ull;
const ll MAX = 1E7 + 5;
const ll mod = 1E9 + 7;

int N, M;
int A[1001][1001];

void Init(){
    cin >> N >> M;
    for(int i=1; i<= N; ++i)
        for(int j=1; j<= M; ++j)
            cin >> A[i][j];
}

void Proc(){
    vector<vector<int>> dp (1001,vector<int>(1001,0));    
    for(int i = 1; i <= N ; ++i){
        for(int j=1; j<= M ; ++j){
            if(i==1 && j==1){
                dp[i][j] = A[i][j];
                continue;
            }
            if(i==1)
                dp[i][j] = dp[i][j-1] + A[i][j];
            else if(j == 1)
                dp[i][j] = dp[i-1][j];
            else
                dp[i][j]= min({dp[i-1][j] , dp[i][j-1] , dp[i-1][j-1]}) + A[i][j];
        }
    }
    cout << dp[N][M] << endl;
}

int main(){
    xxxxx
    int t=1, mul_test = 0		; if(mul_test) cin >> t;
    while(t--){
        Init();
        Proc();

    }
    return 0;
}

/* ==> Shin <== */