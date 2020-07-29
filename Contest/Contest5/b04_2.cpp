#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--){
    	int n, m; 
	    cin >> n >> m;
        vector<int> a(n);
        for (int &x: a) {
           cin >> x;
           x %= m;
        }

        vector<int> f(m, INT_MIN), g(m);
        f[0] = 0;
        for (int x: a) {
           for (int i=0; i<m; i++) {
              g[i] = max(f[i], f[(i-x+m) % m] + 1);
           }
           f.swap(g);
        }

       cout << f[0] << endl;
	}
    return 0;
}