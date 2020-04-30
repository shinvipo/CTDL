#include<bits/stdc++.h>
#include<iostream>
#define xxxxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll; 
const ll MAX = 1E7 + 5;
const ll mod = 1E9 + 7;

int n,m,k;
vector<int> a;

void init(){
    cin >> n >> m >> k; a.resize(n+m);
    for(int i = 0 ; i < n + m ; i++)
        cin >> a[i];

    sort(a.begin(),a.end());
    cout << a[k-1] << endl;
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