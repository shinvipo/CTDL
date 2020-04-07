#include<bits/stdc++.h>

using namespace std;
int n;
vector<int> x (1000,0);

bool check(){
	for(int i=1; i<= n; ++i)
		if(x[i] != 1)	return false;
		return true;
}

void out(){
	int zeroo =n;
	cout <<'(';
	for(int i=1 ; i<= n; ++i){
		zeroo -= x[i];
		if(zeroo != 0)
			cout << x[i]<<" ";
		else if(zeroo == 0){
			cout << x[i] <<") ";
			break;
		}
	}
}

void sinh(){
	for(int i= n; i>0; --i){
		if(x[i] != 0 && x[i] != 1){
			x[i] -= 1;
			if(x[i+1] + 1 <= x[i])	
				x[i+1]+=1;
			else
				for(int j =i +2; j<=n ; ++j){
					if(x[j] +1 <= x[i]){
						x[j] +=1;
						break;
					}
				}
			break;
		}		
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		x.clear();
		cin >> n;
		if(n == 0) cout <<"(0)"<<endl;
		else{
			x[1] = n;
			for(int i=2; i<= n; ++i)
				x[i] = 0;
			out();
			while(!check()){
				sinh();
				out();
			}
			cout << endl;
			x.clear();
		}
	}
	return 0;
}

