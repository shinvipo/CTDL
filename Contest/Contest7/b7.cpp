/*
    Note:	
*/

#include<bits/stdc++.h>
#include<iostream>
#define xxxxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll; 
typedef unsigned long long ull; 
const ll MAX = 1E7 + 5;
const ll mod = 1E9 + 7;

void Init(){
    string s;
    cin >> s;
    stack<char> st;
    for(int i=0; i< s.length(); ++i){
        if(st.empty() == false && s[i] == ')'){
            if(st.top() == '(')
                st.pop();
            else
                st.push(s[i]);
        }
        else
            st.push(s[i]);    
    }

    int len = st.size();
    int n=0;

    while (!st.empty() && st.top() == '(')
    {
        st.pop();
        n++;
    }

    cout << len/2 + n%2 << endl;
}

void Proc(){}

int main(){
    xxxxx
    int t=1, mul_test = 1		; if(mul_test) cin >> t;
    while(t--){
        Init();
        Proc();
    }
    return 0;
}

/* ==> Shin <== */