#include<bits/stdc++.h>
#define xxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long;

using namespace std;

int row, col , a[100][100];
int dp[100][100];

void init(){
    cin >> row >> col;
    for(int i = 1; i <= row ; ++i)  for(int j= 1; j <= col ; ++j)   cin >> a[i][j];
}

int solve(){
    dp[1][1] = 1;
    for(int i = 1 ; i <= row ; ++i){
        for(int j = 1; j <= col ; ++j){
            if( i == 1 && j == 1)   continue;
            else if( i == 1)    dp[i][j] = dp[i][j-1];
            else if( j == 1)    dp[i][j] = dp[i -1][j];
            else dp[i][j] = dp[i][j-1] + dp[i-1][j];
        }
    }
    return dp[row][col];
}

int main(){
    xxx;
   int t; cin >> t;
   while(t--){
       init();
       cout << solve() <<endl;
   }
    return 0;
}