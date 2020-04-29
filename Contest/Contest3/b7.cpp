#include<bits/stdc++.h>
#include<iostream>
#define xxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long 

using namespace std;

const long long MAX = 1e7 +5;

int n, arr1[MAX] , arr2[MAX];

void init(){
    cin >> n;
    for(int i=0; i< n; ++i)
        cin >> arr1[i];
    for(int i =0 ; i < n; ++i)
        cin >> arr2[i];
    sort( arr1, arr1 +n );
    sort( arr2, arr2 + n );
    reverse( arr2, arr2 + n );
    ll sum = 0;
    for(int i=0; i < n ; ++i){
        sum += arr1[i] * arr2[i];
    }
    cout << sum << endl;
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