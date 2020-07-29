/*
    Note:	CẶP SỐ
    Cho N cặp số, trong đó số thứ nhất bao giờ cũng nhỏ hơn số thứ 2. Ta nói, cặp số <c, d> được gọi là
theo sau cặp số <a,b> nếu b<c. Nhiệm vụ của bạn là tìm số lớn nhất chuỗi các cặp thỏa mãn ràng8
buộc trên. Ví dụ với các cặp {<5, 24>, <39, 60>, <15, 28>, <27, 40>, <50, 90>} ta có kết quả là 3
tương ứng với chuỗi các cặp {<5,24>, <27, 40>, <50, 90>}
*/

#include<bits/stdc++.h>
#include<iostream>
#define xxxxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll; 
typedef unsigned long long ull; 
const ll MAX = 1E7 + 5;
const ll mod = 1E9 + 7;

int n;
vector<pair<int,int>> a;

bool cmp(pair<int,int> x , pair<int,int> y){
    return (x.first < y.first);
}

void Init(){
    cin >> n ; a.resize(n);
    for(int i = 0 ; i < n ; i++) cin >> a[i].first >> a[i].second;
}

void Proc(){
    int res =0;
    vector<int> dp(n,0);
    sort(a.begin(),a.end(),cmp);
    for(int i = 0 ; i < n ; i++){
        for(int j = i - 1 ; j >= 0 ; j--)
            if( a[i].first > a[j].second) dp[i] = max(dp[i],dp[j]);
        dp[i] += 1;
        res = max(res,dp[i]);
    } 
    cout << res << endl;
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