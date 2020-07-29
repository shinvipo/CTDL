/*
    Note:	Ma Trận Kề => Danh Sách Kề
*/

#include<bits/stdc++.h>
#include<iostream>
#define xxxxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll; 
typedef unsigned long long ull; 
const ll MAX = 1E7 + 5;
const ll mod = 1E9 + 7;
int a[1005][1005];
void Init(){}

void Proc(){
    int n=0;
	cin>>n;
	for (int i=0; i<n; i++)
	 for (int j=0; j<n; j++) cin>>a[i][j];
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++) if(a[i][j]) cout<<j+1<<" ";
		cout<<endl;
	} 
}

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