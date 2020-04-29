#include<bits/stdc++.h>
#include<iostream>
#define xxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long 

using namespace std;

const ll MAX = 1E7 + 5;

string s;

void init()
{
    cin >> s;
    vector<int> pos;
    for (int i = 0; i < s.length(); ++i)
        if (s[i] == '[')
            pos.push_back(i);
    int cnt = 0, res = 0, id = 0;
    for (int i = 0; i < s.length(); i++)
    {
        cnt += ((s[i] == '[') ? 1 : -1);
        id += (s[i] == '[');
        if (cnt < 0)
        {
            res += pos[id] - i;
            swap(s[pos[id]], s[i]);
            cnt = 1;
            id++;
        }
    }
    cout << res << endl;
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