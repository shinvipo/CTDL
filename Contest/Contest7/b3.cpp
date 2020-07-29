/*
    Note:
*/

#include<stack>
#include<string>
#include<iostream>
#include<vector>
#define xxxxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll MAX = 1e6 + 5;
const ll mod = 1E9 + 7;

void Init() {
    string s;   
    getline(cin, s);
    stack<char> st;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] != ' ') {
            st.push(s[i]);
        }

        if (s[i + 1] == ' ' || s[i + 1] == 0) {
            while (!st.empty())
            {
                cout << st.top();
                st.pop();
            }
            cout << ' ';
        }
    }
}

void Proc() {}

int main() {
    xxxxx
    int t = 1, mul_test = 1; if (mul_test) cin >> t;
    cin.ignore();
    while (t--) {
        Init();
        Proc();
        cout << endl;
    }
    return 0;
}

/* ==> Shin <== */