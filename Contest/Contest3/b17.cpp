#include<algorithm>
#include<queue>
#include<iostream>
#define xxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long 

using namespace std;

const ll MAX = 1E7 + 5;

void init() {
    priority_queue<int> pq;
    int cnt[200] = { 0 };

    int k; cin >> k;
    string s;   cin >> s;

    for (int i = 0; i < s.length(); ++i) { cnt[s[i]] += 1; }

    sort(cnt, cnt + 200);
    reverse(cnt, cnt + 200);

    for (int i = 0; cnt[i] != 0; ++i)    pq.push(cnt[i]);

    for (int i = 0; i < k; ++i) {
        int tmp = pq.top();
        pq.pop();
        tmp -= 1;
        pq.push(tmp);
    }
    ll res = 0;
    while (!pq.empty()) {
        int tmp = pq.top();
        res += tmp * tmp;
        pq.pop();
    }
    cout << res << endl;
}

int main() {
    xxx
        int t; cin >> t;
    while (t--) {
        init();

    }
    return 0;
}

//copy by shincrab