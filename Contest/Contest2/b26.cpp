#include<bits/stdc++.h>
#include<iostream>
#define xxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long 

using namespace std;

int k, tmp;
string a,res;
void init(){
    cin >> k >> a;
    res=a;
}

void Try(int k){
    if(k == 0)  return;
    for(int i=0 ; i < a.length() -1 ; ++i){
        for(int j=i+1; j < a.length() ; ++j){
            if(a[i] <a[j]){
                swap(a[i] , a[j]);
                if(a.compare(res) > 0)
                    res = a;
                Try(k-1);
                swap(a[i],a[j]);
            }
        }
    }
}

int main(){
    xxx
    int t; cin >> t;
    while(t--){
        init();
        Try(k);
        cout << res <<endl;

    }
    return 0;
}

//copy by shincrab