#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin>> t;
	while(t--){
		int n; cin >> n;
		int a[100000];
		
		for(int i=0; i< n; ++i)
			cin >> a[i];
		int c =0;
		for(int i=0; i< n; ++i){
			for(int j = i +1; j<n; ++j)
			{
				if(a[i] == a[j]){
					cout << a[j]<<endl;
					c = 1;	
					break;
				}				
			}
			if( c == 1) break;
    	}
    	if(c == 0)	cout <<"NO"<<endl;	
	}
	return 0;
}
