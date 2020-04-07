#include<bits/stdc++.h>

using namespace std;

int main(){
	vector<int> a,b;
	int t; cin >> t;
	for(int kk=1; kk<= t; ++kk){
		a.clear();
		b.clear();
		int m,n,d; cin >> m >> n >> d;
		for(int i=0; i< m ; ++i){
			int tmp; cin >> tmp;
			a.push_back(tmp);
		}
		for(int i=0; i< n ; ++i){
			int tmp; cin >> tmp;
			b.push_back(tmp);
		}
		for(int i=0; i<b.size(); ++i)
			a.insert(a.begin()+d+i,b[i]);
	cout << "Test "<<kk <<":" << endl;
	for(int i=0; i< a.size(); ++i)
		cout << a[i] <<" ";
	cout <<endl;
	}
}
