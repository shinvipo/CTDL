/*
    Note:	
*/

#include<bits/stdc++.h>
#include<iostream>
#define xxxxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll; 
typedef unsigned long long ull; 
const ll MAX = 1E7 + 5;
const ll mod = 1E9 + 7;

void Init(){
    int n;
    cin >> n;
    deque <ll> q;
	q.push_front(9);
	bool ok = false;
	while (q.front() % n != 0){
		ll temp = q.front() * 10;
		q.push_back(temp);
		q.push_back(temp + 9);
		q.pop_front();
	}

    cout << q.front() << endl;
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