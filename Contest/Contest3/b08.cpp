#include<bits/stdc++.h>
#include<iostream>
#define xxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long 

using namespace std;

const ll MAX = 1E7 + 5;

struct b8
{
    int l;
    int r;
};

bool cmp(b8 a , b8 b){
    return a.r < b.r;
}
 
void init(){
    int n;
    cin >> n;
    b8 s[n+5];
    for(int i=0;i<n;i++) cin >> s[i].l;
    for(int i=0;i<n;i++) cin >> s[i].r;
    sort(s,s+n,cmp);
    int tmp=0;
    int ans=1;
    for(int i=1;i<n;i++){
        if(s[i].l>=s[tmp].r){
            ans++;
            tmp=i;
        }
    }
    cout << ans<<endl;
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