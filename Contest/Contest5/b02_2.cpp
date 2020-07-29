//LIS O(n^2)
#include<bits/stdc++.h>
#include<iostream>
#define xxxxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll; 
const ll MAX = 1E7 + 5;
const ll mod = 1E9 + 7;

vector<int> A{ 10, 22, 9, 33, 21, 50, 41, 60 };
int n;

void Init(){
    cin >> n;
    A.resize(n);
    for(auto &X:A)  cin >> X;
}

void Proc(){
    int dp[1001] ={0};
    dp[0] = 1;
    int len = A.size();
    for(int i=1; i < len ; ++i){
        for (int j = 0; j < i; j++)
        {
            if(A[i] > A[j] && dp[i] < dp[j] + 1)
                dp[i] = dp[j] +1;
        } 
    }
    cout << *max_element(dp,dp+len);
}

int main(){
    xxxxx
    int t=1;
    while(t--){
        Proc();

    }
    return 0;
}

/* ==> Shin <== */