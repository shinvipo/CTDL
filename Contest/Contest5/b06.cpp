/*
    Note:	chuỗi đối xứng dài nhất
*/

#include<bits/stdc++.h>
#include<iostream>
#define xxxxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll; 
const ll MAX = 1E7 + 5;
const ll mod = 1E9 + 7;
void Init(){
    int res = 0;
    string s;   cin >> s;
    vector<vector<int>> dp(s.size(), vector<int>(s.size(), 0));
	for (int i = 0; i < s.size(); ++ i) {
		for (int j = i; j >= 0; -- j) {
			if (s[i] != s[j]) {
				dp[j][i] = 0;
				continue;
			}
			if (i - j <= 1) {
				dp[j][i] = 1;
			} else {
				dp[j][i] = dp[j + 1][i - 1];
			}
			if (dp[j][i] ==1 && res < (i - j + 1)) {
				res =  i - j + 1;
			}
		}
	}
    cout << res << endl;
}

void Proc(){}

int main(){
    xxxxx
    int t=1, mul_test =1		; if(mul_test) cin >> t;
    while(t--){
        Init();
        Proc();

    }
    return 0;
}

/* ==> Shin <== */