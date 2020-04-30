#include<bits/stdc++.h>
#include<iostream>
#define xxxxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll; 
const ll MAX = 1E7 + 5;
const ll mod = 1E9 + 7;

void init(){
    int n; cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++) cin >> a[i];
	sort(a,a+n);
    int res = n , mid = n/2;
    for(int i = 0; i < n/2 && mid < n; i++ ){
        while(mid < n){
            if(2*a[i] <= a[mid]){
                res--;
                mid++;
                break;
            }
            else mid++;
        }
	}
    cout<< res << endl;
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