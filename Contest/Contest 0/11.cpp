#include<bits/stdc++.h>
using namespace std;
void result(string s ){
	int i = 0, j=0;
	int n = 1;
	string name1, name2 ;
	while(s[i] == ' ' && i < s.length())
			i++;
	for(i; s[i] != ' '; ++i){
		if(s[i] >= 'a' && s[i] <= 'z')
			s[i]-= 32;
		name1 += s[i];
	}
	
	while(i < s.length()){
		while(s[i] == ' ' && i < s.length())
			i++;
		if(s[i] >= 97 && s[i] <= 122) s[i] -= 32;
		name2 += s[i];
		i++;
//		cout << name2 <<endl;
		while(s[i] != ' ' && i < s.length()){
		    if(s[i] >= 65 && s[i] <= 90) 
				s[i] += 32;
			name2 += s[i];
			++i;
		}
		if( i != s.length())	name2 += ' ';
		else name2 += ',';
	}
	cout <<name2 <<' '<<name1 <<  endl;
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

