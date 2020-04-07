#include<iostream>
int a[1001], n;
using namespace std;
void display(int a[], int n)
{	cout <<"[";
	for(int i = 1; i<= n ; ++i){
		if(i == n)
			cout << a[i]<<"]"<<endl;
		else cout <<a[i]<<" ";		
	}
}
int main(){
	int t; cin >> t;
	while(t--){
	    cin >> n;
	    for(int i= 1; i<= n; ++i)	cin >> a[i];
	    int i =n;
	    display(a,n);
	    i--;
	    while(i != 0){
	    	for(int j=1; j<= i; ++j){
	    		a[j] += a[j+1];
			}
			display(a,i);
			i--;
		}
	}
	return 0;
}
