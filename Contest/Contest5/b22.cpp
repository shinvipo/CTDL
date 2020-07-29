/*
    Note:	TỔNG LỚN NHẤT CỦA DÃY CON KHÔNG KỀ NHAU
*/

#include<bits/stdc++.h>
#include<iostream>
#define xxxxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll; 
typedef unsigned long long ull; 
const ll MAX = 1E7 + 5;
const ll mod = 1E9 + 7;

vector<ll> nums;
ll n;
void Init(){
    cin >> n;
    nums.resize(n);
    for(auto &x:nums)   cin >> x;
}

void Proc(){
    int n = nums.size();
    int i = 0 , e =0;   // i : include  e: except
    for(int j=0; j< n; ++j){
        int tmp =i;
        i = nums[j] + e;     
        e = max (tmp , e); 
    }
    cout << max(i,e) <<endl;
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