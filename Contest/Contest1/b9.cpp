#include<iostream>

using namespace std;

int a[17],n;
void in()
{
    for(int i=1;i<=n;i++) cout<<a[i];
    cout<<" ";
}
void sinh(int vt)
{
    if (vt>n) in();
    else
        if (a[vt]==1)
        {
            sinh(vt+1);
            a[vt]=0;
            sinh(vt+1);
        }
        else
        {
            sinh(vt+1);
            a[vt]=1;
            sinh(vt+1);
        }
}
int main()
{
    int t; cin >> t;
    while(t--){
    	cin>>n;
    	for(int i=1; i<= n; ++i)	a[i] =0;
    	sinh(1);
    	cout << endl;
	}
	return 0;
}

