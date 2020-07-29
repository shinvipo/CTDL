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
	stack <char> ngc;
	for (int i=0; i<=s.length(); i++)
	{
		if (s[i] == '{') ngc.push(s[i]);
		if (s[i] == '}') 
		{
			if (ngc.empty()) return 0;
			else if (ngc.top() == '{') ngc.pop();
			else return 0;
		}
		if (s[i] == '(') ngc.push(s[i]);
		if (s[i] == ')') 
		{
			if (ngc.empty()) return 0;
			else if (ngc.top() == '(') ngc.pop();
			else return 0;
		}
		if (s[i] == '[') ngc.push(s[i]);
		if (s[i] == ']') 
		{
			if (ngc.empty()) return 0;
			else if (ngc.top() == '[') ngc.pop();
			else return 0;
		}
	}
	if (ngc.empty()) return 1;
	else return 0;
}

void Proc(){}

int main(){
    xxxxx
    int t=1, mul_test = 1		; if(mul_test) cin >> t;
    while(t--){
        cin>>s;
		if (Init()) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
    }
    return 0;
}

/* ==> Shin <== */
