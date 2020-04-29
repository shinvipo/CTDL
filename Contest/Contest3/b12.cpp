#include<bits/stdc++.h>
#include<iostream>
#define xxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long 

using namespace std;

const ll MAX = 1E7 + 5;

string s;
void init(){
    cin >> s;
    int d[26] = {0};
    for(int i = 0 ; i < s.length() ; i++)
        d[s[i] - 'a']++;
    sort(d,d + 26);
    int res = 1;
    for(int i = 24 ; i>= 0 ; i--){
        res += d[i];
        if(res >= d[25]){
            cout << "1\n";
            return;
        }
    }
    cout <<"-1\n";
}

int main(){
    xxx
    int t; cin >> t;
    while(t--){
        init();

    }
    return 0;
}

//copy by shincrab