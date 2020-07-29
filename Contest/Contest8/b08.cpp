/*
    Note:	so BDN2
*/

#include<bits/stdc++.h>
#include<iostream>
#define xxxxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll; 
typedef unsigned long long ull; 
const ll MAX = 1E7 + 5;
const ll mod = 1E9 + 7;

int n, ok = 0;

void Init(){
    cin >> n;
}

void Proc(int s){
    if(s % n == 0) {
		cout << s << endl;
		ok = true;
		return;
	}
	for(int i = 0 ; i <= 1 ; i++){
		if(ok) break;
		Proc(s * 10 + i);
	}
}

int main(){
    xxxxx
    int t=1, mul_test = 1		; if(mul_test) cin >> t;
    while(t--){
        Init();
        Proc(1);
    }
    return 0;
}

/* ==> Shin <== */