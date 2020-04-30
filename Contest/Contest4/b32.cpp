#include<bits/stdc++.h>
#include<iostream>
#define xxxxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll; 
const ll N = 1E7 + 5;
const ll mod = 1E9 + 7;

ll n;
vector<ll> f(N), a(N);
void update(int p)
{
	for (int i = p; i <= N; i += i & (-i))
		f[i]++;
}
ll sum(int p)
{
	ll res = 0;
	for (int i = p; i; i -= i & (-i))
		res += f[i];
	return res;
}

void init()
{
	cin >> n;
	ll res = 0, d = 1;
	for (int i = 0; i <= N; i++)
		f[i] = 0;
	map<ll, vector<int>> Down;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		Down[a[i]].push_back(i);
	}
	for (auto z : Down)
	{
		for (auto zz : z.second)
			a[zz] = d;
		d++;
	}
	for (int i = n; i >= 1; i--)
	{
		res += sum(a[i] - 1);
		update(a[i]);
	}
	cout << res;
}

int main(){
    xxxxx
    int t; cin >> t;
    while(t--){
        init();
        cout << endl;
    }
    return 0;
}

//copy by shincrab