#include<bits/stdc++.h>
#include<iostream>
#define xxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long 

using namespace std;

int Buy , Day , need ; 

int n,s,m;
   
void init(){
    cin >> n >> s >> m;
    int x = s * m;
    if(x > (s-s/7)*n) cout << -1;
    else{
        s = s-s/7;
        for(int i = 1;i <= s;i++){
            int t = n*i;
            if(t >= x){
                cout << i;
                break;
            }
        }
    }
     cout << endl;
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