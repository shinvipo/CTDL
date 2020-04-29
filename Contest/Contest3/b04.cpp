#include<bits/stdc++.h>
#include<iostream>
#define xxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long 
#define MAX 1e7+10
using namespace std;

ll conv(string a){
    stringstream str2num(a);
    ll tmp = 0;
    str2num >> tmp;
    return tmp;
}

int main(){
    xxx
    int t; cin >> t;
    while(t--){
        char a[101]; int n;
        cin >> n ;
        for(int i=1; i <= n ; ++i)
            cin >> a[i];
        sort(a+1 , a+1+n);
        string min1, min2;
        min1 = min2 = "";
        int i =1;
        for(i; i <= n ;){
            min1 += a[i];
            i++;
            if(i <= n){
                min2 += a[i];
                ++i;
            }
        }
        cout << conv(min1) + conv(min2) <<endl;
    }
    return 0;
}

//copy by shincrab