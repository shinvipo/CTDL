#include<bits/stdc++.h>
#include<iostream>
#define xxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long 

using namespace std;

int solve(int a[], int n){
    int i =9 , dem =0;
    while(n < a[i]) --i;
    for(int j = i ; j >=0 ; --j){
        int tmp = n / a[j];
        dem += tmp;
        n = n - tmp * a[j];
        if(n == 0  )    break;
    }
    return dem;
}

void init(){
    int mon[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
    int n;
    cin >> n;
    cout << solve(mon , n) <<endl;
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