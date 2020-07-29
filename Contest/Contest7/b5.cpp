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
string s;
int Init()
{
    cin >> s;
	int kl=0;
    stack <int> ngc;
    ngc.push(-1);
    for (int i=0; i<s.length(); i++)
    {
        if (s[i]=='(') ngc.push(i);
        else
        {
            if (ngc.top()!=-1 && s[ngc.top()]=='(')
            {
                ngc.pop();
                if (i-ngc.top() > kl)
                    kl = i-ngc.top();
            }
            else ngc.push(i);
        }
    }
    return kl;
}

void Proc(){}

int main(){
    xxxxx
    int t=1, mul_test = 1		; if(mul_test) cin >> t;
    while(t--){
        cout << Init() << endl;
        Proc();
    }
    return 0;
}

/* ==> Shin <== */