#include<bits/stdc++.h>
#include<iostream>
#define xxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

const long long m = 1e9 + 7;
const long long MAX = 1e7 + 8;
long long a[MAX] , n;

void init(){
    cin >> n;
    for(int i= 0; i< n; ++i)
        cin >> a[i];
    sort(a, a+n);
    long long sum = 0;
    for(int i=0; i<n;++i)
        sum = (sum + (a[i] % m) *(i% m)) %m;
    cout << sum <<endl;
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