#include<bits/stdc++.h>
#include<iostream>
#define xxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long 

using namespace std;

int a[1007] , n , k;

int main(){
    xxx
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i =0 ; i < n ; ++i)    cin >> a[i];
        sort(a,a+n);
        k = min(k , n - k);
        cout << accumulate(a+k,a+n,0) - accumulate(a,a+k,0) <<endl;
    }
    return 0;
}

//copy by shincrab