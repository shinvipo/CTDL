#include<bits/stdc++.h>
#include<iostream>
#define xxxxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll; 
const ll MAX = 1E7 + 5;
const ll mod = 1E9 + 7;

int k;
string a, b; 

void init(){

    cin >> k >> a >> b;


    int n = 0;
   	int m = 0;
   	for (int i = 0 ; i < a.length(); i++) {
   		n = n * k + (a[i] - '0');
   	}
   	for (int i = 0 ; i < b.length(); i++) {
   		m = m * k + (b[i] - '0');
   	}
   	int res = n + m;
   	vector<int> ans;
   	while (res) {
   		ans.push_back(res % k);
   		res /= k;
   	}
   	for (int i = ans.size() - 1 ; i >=0; i--) {
   		cout << ans[i];
   	}
}

int main(){
    xxxxx
    init();
    return 0;
}

//copy by shincrab