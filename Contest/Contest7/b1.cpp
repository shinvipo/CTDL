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
ll a[1000];
void Init(){
   // memset(st,0,sizeof(st));
    string s;
	int i=0;
	while (cin>>s){
		if(s=="push"){
			cin>>a[i];
			i++;
		}
		if(s=="pop") i--;
		if(s=="show"){
			if (i == 0) cout<<"empty";
			else for(int j=0; j<i; j++) cout<<a[j]<<" ";
			cout<<endl;
		}
	}
}

void Proc(){}

int main(){
    xxxxx
    int t=1, mul_test = 0		; if(mul_test) cin >> t;
    while(t--){
        Init();
        Proc();
    }
    return 0;
}

/* ==> Shin <== */