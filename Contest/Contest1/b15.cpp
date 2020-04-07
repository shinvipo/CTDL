#include<bits/stdc++.h>

using namespace std;

main()
{
	char s[100];
	int n,k;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
	cin>>k;
	cin>>s;
	if(next_permutation(s,s+strlen(s)))
	cout<<k<<" "<<s<<endl;
	else cout<<k<<" "<<"BIGGEST"<<endl;
	}
}
