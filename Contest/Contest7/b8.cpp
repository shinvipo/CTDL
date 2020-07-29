/*
    Note:
*/

#include<stack>
#include<string>
#include<iostream>
#define xxxxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll MAX = 1E7 + 5;
const ll mod = 1E9 + 7;

void Init() {
    string s;
    cin >> s;
    stack<char> st;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '(')
            st.push(i);
        else if (!st.empty() && s[i] == ')') {
            int tmp = 0;
            int tmp2 = st.top();
            s.erase(s.begin() + i); ++tmp;
            if (s[st.top() + 1] == '+' || s[st.top() + 1] == '-') { s.erase(s.begin() + tmp2 - 1);  ++tmp; --tmp2; }
            s.erase(s.begin() + tmp2); ++tmp;
            st.pop();
            i -= tmp;
        }
        else if(!st.empty()){
            if (s[st.top() - 1] == '-') {
                if (s[i] == '+') s[i] = '-';
                else if (s[i] == '-') s[i] = '+';
            }
        }
    }//a-(b-c-(d+e))-f
    if (s[0] == '+') s.erase(s.begin());
    cout << s << endl;
}

void Proc() {}

int main() {
    xxxxx
        int t = 1, mul_test = 1; if (mul_test) cin >> t;
    while (t--) {
        Init();
        Proc();
    }
    return 0;
}

/* ==> Shin <== */