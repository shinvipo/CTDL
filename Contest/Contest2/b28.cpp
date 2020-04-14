#include<bits/stdc++.h>
#define xxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long;

using namespace std;

int n, a[101], sum, check = 0;
int k = 0;

void display(vector<int> v){
    cout <<'[';
    for(int i = 0; i < v.size() -1; ++i)
        cout << v[i]<<" ";
    cout << v[v.size() -1]<<"] ";
}

void Try (int sum, vector<int> kq, int i){
    if(sum < 0) return;
    if(sum == 0)   {
        check = 1;
        display(kq);
    }
    while( i <= n && sum - a[i] >= 0){
        kq.push_back(a[i]);
        Try(sum - a[i], kq, i);
        i++;
        kq.pop_back();
    }
}

int main(){
    xxx
    int t; cin >> t;
    while(t--){
        cin >> n >> sum;
        for(int i = 1; i<= n; ++i)  cin >> a[i];
        vector<int> v;
        Try(sum, v, 1);
        if(check == 0)  cout <<-1;
        cout <<endl;
    }
    return 0;
}