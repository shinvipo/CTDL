#include<bits/stdc++.h>
#include<iostream>
#define xxxxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll; 
const ll MAX = 1E7 + 5;
const ll mod = 1E9 + 7;

string a,b;
ll cv(string s){
    ll sum = 0 ;
    for(int i = 0 ; i < s.length() ; i++){
        sum *= 2;
        sum += (s[i] == '1');
    }
    return sum;
}
 
void init(){
    cin >> a >> b;
    while(a[0] == '0') a.erase(0,1);
    while(b[0] == '0') b.erase(0,1);
    cout << cv(a)*cv(b) << endl;
}
int main(){
    xxxxx
    int t; cin >> t;
    while(t--){
        init();

    }
    return 0;
}

//copy by shincrab