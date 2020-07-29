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
    int V, E;
    cin >> V >> E;
    vector<int> ke[V+1];
    for(int i=1; i<= V; ++i)    ke[i].clear();
    for(int i=1; i<= E; ++i){
        int tmp1, tmp2;
        cin >> tmp1 >> tmp2;
        ke[tmp1].push_back(tmp2);
        ke[tmp2].push_back(tmp1);
    }
    for(int i=1; i<= V; ++i){
        cout << i << ": ";
        for(int j=0; j< ke[i].size();++j)
            cout << ke[i][j] << ' ';
        cout << endl;
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