/*
    Note:	LCS : 3 string
*/

#include<bits/stdc++.h>
#include<iostream>
#define xxxxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll; 
typedef unsigned long long ull; 
const ll MAX = 1E7 + 5;
const ll mod = 1E9 + 7;

string a,b,c;
int len1,len2,len3;
int dp[101][101][101];
void Init(){
    cin >> len1 >> len2 >>len3;
    cin >> a >> b >> c;
    int i, j,k;  
	for(i=0; i<= len1; ++i)
        for(j=0; j <= len2; ++j)
            for(int k=0; k <= len3 ; ++k){
                if(i==0 || j == 0 || k == 0)
                    dp[i][j][k] = 0;
                else if(a[i-1] == b[j-1] && a[i-1] == c[k-1])
                    dp[i][j][k] = dp[i-1][j-1][k-1] +1;
                else
                    dp[i][j][k] = max({dp[i-1][j][k],dp[i][j-1][k],dp[i][j][k-1]});
            }
    cout << dp[len1][len2][len3]<<endl;
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