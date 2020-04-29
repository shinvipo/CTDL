#include<bits/stdc++.h>
#include<iostream>
#define xxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long 

using namespace std;

const ll MAX = 1E7 + 5;
long long a[MAX] , n;

void init(){
    cin >> n;
    priority_queue < long long, vector<long long>, greater<long long> > q;
    for(long long i=1; i<= n; ++i){
        cin >> a[i];
        q.push(a[i]);
    }

    long long res = 0;

    while (q.size() >1)
    {
        long long tmp1 = q.top();
        q.pop();
        long long tmp2 = q.top();
        q.pop();
        long long tmp3 = tmp1 +tmp2;

        res+= tmp3;
        q.push(tmp3);
    }

    cout << res <<endl;
    
}

int main(){
   xxx;
   int t; cin >> t;
   while(t--){
       init();
   }
    return 0;
}

//copy by shincrab