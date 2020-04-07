#include<bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	while(n--){
		int a; cin >> a;
		int arr[101];
		for(int i=1; i<=a; ++i)
			cin >> arr[i];
		if(arr[1] == arr[a])	cout<<"YES"<<endl;
		else cout <<"NO"<<endl;
	}
	return 0;
}
