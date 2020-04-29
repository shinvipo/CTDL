#include<bits/stdc++.h>
#include<iostream>
#define xxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long 

using namespace std;

int n , a[101];

bool init(){
    cin >> n;
    for(int i=0; i< n; ++i) cin >> a[i];
    int cp[n+5]; 
    copy(a, a + n, cp); 
    sort(cp, cp + n); 
    for (int i = 0; i < n; i++) { 
        if (a[i] != cp[i] && a[n - 1 - i] != cp[i] )
            return false; 
    }
    return true; 
}

int main(){
    xxx
    int t; cin >> t;
    while(t--){
        if(init())  cout <<"Yes"<<endl;
        else cout <<"No" << endl;
    }
    return 0;
}

//copy by shincrab