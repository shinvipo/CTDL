#include<bits/stdc++.h>
#include<iostream>
#define xxxxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll; 
const ll MAX = 1E7 + 5;
const ll mod = 1E9 + 7;

void init(){
    int n , k;
    cin >> n >> k;
    if(9*k < n) cout << -1;
    else{
        int d = n/9, m = n%9;
        if(m == 0){
            k = k - d + 1;
            if(k > 1){
                cout << 1;
                for(int i =1; i < k-1 ; ++i)    cout <<0;
                cout <<8;
            }
            else cout << 9;
            for(int i=1; i< d; ++i) cout << 9;
        }
        else{
            k-=d;
            if(k>1) cout << 1;
            for(int i=1; i < k-1 ; ++i) cout << 0;
            if(k > 1)   cout << m-1;
            else cout << m;
            for(int i=1; i<= d ; ++i)   cout << 9;
        }
    }
    cout << endl;
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