/*
    Note:	DI CHUYỂN VỀ GỐC TỌA ĐỘ
*/

#include<bits/stdc++.h>
#include<iostream>
#define xxxxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll; 
typedef unsigned long long ull; 
const ll MAX = 1E7 + 5;
const ll mod = 1E9 + 7;

int row,col;
int dp[26][26];
int grid[26][26];
void Init(){
    cin >> row >> col;
    for(int i=0; i<= row; ++i){
        for(int j=0; j <= col ; ++j){
                dp[i][j] = -1;
        }
    }
}

int Proc(int m , int n){
    if(m==0 || n==0){
        dp[m][n] = 1;
        return dp[m][n];
    }
    if(dp[m][n] == -1)
        dp[m][n] = Proc(m-1,n) +Proc(m,n-1);
    return dp[m][n];
}

int main(){
    xxxxx
    int t=1, mul_test = 1		; if(mul_test) cin >> t;
    while(t--){
        Init();
        cout << Proc(row,col) <<endl;
    }
    return 0;
}

/* ==> Shin <== */