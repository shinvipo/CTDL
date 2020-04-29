#include<bits/stdc++.h>
#include<iostream>
#define xxxxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll; 
const ll MAX = 1E7 + 5;
const ll mod = 1E9 + 7;

int k ;
string s;
int a[257];

void init(){
	cin >> k >> s;
	for(int i = 0 ; i < 257 ; i++) a[i] = 0;
	for(int i = 0 ; i < s.length() ; i++) a[s[i]]++; // dem so lan xuat hien
}

bool res(){
	int n = s.length();
	sort(a , a + 257);
	int max = a[256]; // ki tu lap lai so lan nhieu nhat
	int vt = 0; // vi tri bat dau
	for(int i = 1 ; i < max ; i++){
		vt = vt + k; // vi tri tiep theo
		if(vt > n) return false;
	}
	return true;
}

int main(){
    xxxxx
    int t; cin >> t;
    while(t--){
        init();
        if(res()) cout << "1\n" ; else cout << "-1\n";
        cout <<endl;
    }
    return 0;
}

//copy by shincrab