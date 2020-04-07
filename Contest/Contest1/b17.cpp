#include<iostream>
#include<queue>
using namespace std;

long long BoiSo(int n){
	long long s = 9;
	queue<long long> q;
	q.push(9);
	if(9%n == 0) return 9;
	while(1){
		long long num = q.front();
		q.pop();
		if(num%n==0) return num;
		q.push(num*10);
		q.push(num*10+9);
	}
}
int main(){
	int t, n;
	cin>>t;
	while(t--){
		cin>>n;
		cout<<BoiSo(n)<<endl;
	}
}
