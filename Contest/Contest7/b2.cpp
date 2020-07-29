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
stack <int> a;
void Init(){
    string s;
	cin>>s;
	if(s=="PUSH"){
		int n;
		cin>>n;
		a.push(n);
	}
	if(s=="POP") if (!a.empty()) a.pop();
	if(s=="PRINT"){
		if (a.empty()) cout<<"NONE";
		else cout<<a.top();
		cout<<endl;
	}
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