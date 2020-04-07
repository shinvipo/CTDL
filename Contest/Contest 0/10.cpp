#include<bits/stdc++.h>
using namespace std;
void result(string s ){
	int i = 0;
	int n = 1;
	while(i < s.length()){
		int j = i;
		string name ;
		while(s[j] == ' ' && j < s.length())
			j++;
		i = j;
		if(s[i] >= 97 && s[i] <= 122) s[i] -= 32;
		name += s[i];
		i++;
		while(s[i] != ' ' && i < s.length()){
		    if(s[i] >= 65 && s[i] <= 90) s[i] += 32;
			name += s[i];
			i++;
		}
		cout << name << " ";
	}
	cout << endl;
}
int main(){
	int T;
	scanf("%d\n" , &T);
	while(T--){
		string s;
		getline(cin , s);
		result(s );
	}
}

