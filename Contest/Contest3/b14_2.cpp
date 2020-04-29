#include<bits/stdc++.h>
#include<iostream>
#define xxxxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll; 
const ll MAX = 1E7 + 5;
const ll mod = 1E9 + 7;
int s,d; 

void init(){
    cin >> s >> d;

    int x = s/d;
    int y = s - x*d; 
    if( s > 9*d ) {
        cout << -1 << '\n';
        return;
    }
    int a[d+5] ;
    for(int i = 0 ; i < d ; i++) a[i] = x;
    if( x == 0 ) a[0] = 1 , y--;
    int pos = d - 1 ;
    for(int i = d - 1 ; i >= 0 , y > 0; i--){
        while(a[i] < 9 && y > 0) a[i]++ , y--;
        if( a[i] == 9) pos = i - 1;
    }
    while(a[0] > 1 && pos != 0 && a[pos] < 9){
        a[0]--; a[pos]++;
        if(a[pos] == 9) pos--;
    }
    for(int i = 1 ; i < d ; i++){
        if(i >= pos) break;
        while(a[i] != 0 && pos != i && a[pos] < 9){
            a[i]--; a[pos]++;
            if(a[pos] == 9) pos--;
        }
    }
    for(int i = 0 ; i < d ; i++)
        cout << a[i];
    cout << '\n';
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