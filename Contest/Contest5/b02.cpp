// Longest Increment Subarray => LIS
// O(nlogn)
#include<bits/stdc++.h>
#include<iostream>
#define xxxxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll; 
const ll MAX = 1E7 + 5;
const ll mod = 1E9 + 7;

vector<int> A   {2, 5, 3, 7, 11, 8, 10, 13, 6 };
int n;

void Init(){
    cin >> n;
    A.resize(n);
    for(auto &x : A)   cin >> x;
}

void Proc(){
    vector<int> dp (A.size(),0);
    dp[0] = A[0];
    int length = 1;
    for(int i =0; i< A.size(); ++i){
        auto b = dp.begin() ,  e = dp.begin() + length ;
        auto it = lower_bound(b,e,A[i]);

        if(it == e)
            dp[length++] = A[i];
        else
            *it = A[i];
    }
    cout << length<<endl;
}

int main(){
    xxxxx
    int t=1; 
    while(t--){
        Init();
        Proc();
    }
    return 0;
}

/* ==> Shin <== */