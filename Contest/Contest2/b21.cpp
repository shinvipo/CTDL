#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    string s; cin >> s;
//    sort(s.begin(), s.end());
    string res;
    while(next_permutation(s.begin(), s.end())){
    	res+= s;
    	res+='\n';
	}
	cout << res;
    return 0;
}
