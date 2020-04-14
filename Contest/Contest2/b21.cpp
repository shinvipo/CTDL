#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
    	string s; cin >> s;
        sort(s.begin(), s.end());
        string res = "";
        res += s;
        res += " ";
        while(next_permutation(s.begin(), s.end())){
            res+= s;
            res+=' ';
        }
        cout << res <<endl;
	}
    return 0;
}
