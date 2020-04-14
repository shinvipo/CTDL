#include<bits/stdc++.h>
#include<iostream>
#define xxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long 

using namespace std;

int k, n ,a[101],sub[101], sum , res;

void init(){
    sum = 0;
    res = 0;
    cin >> n >> k;
    for(int i=1; i<= n; ++i){
        cin >> a[i];
        sum += a[i];
    }  
}

void Try(int pos){
    if(res) return; //stop immediately
    if(pos > n){
        res = 1;
        return;
    }
    bool check = 0;
    for(int i= 1; i <= k ; ++i){
        if(check && sub[i] == 0)    continue;
        if(sub[i] == 0) check = 1;
        if(sub[i] + a[pos] > sum)   continue;    // try next bucket
        sub[i] += a[pos];
        Try(pos +1);
        sub[i] -= a[pos];
    }
}

int solution(){
    if(sum % k) return 0;
    sum /= k;
    for(int i=1; i<= k; ++i)    sub[i] = 0;
    Try(0);
    return res;
}

int main(){
    xxx
    int t; cin >> t;
    while(t--){
        init();
        cout << solution()<<endl;
    }
    return 0;
}

//copy by shincrab