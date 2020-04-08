#include<bits/stdc++.h>

using namespace std;

int n, a[100][100]; string s;
int kt = 0, k=0;

void display(int k)
{
    for(int i= 0; i< k; ++i)
        cout << s[i];
    cout << " ";
}

void Try(int i, int j, int k){
    if(i == n && j == n){
        display(k);
        kt = 1;
        return;
    }
    if( i < n && a[i+1][j] == 1){
        s[k] ='D'; k++;
        Try(i+1,j, k);
    }
    if(j < n && a[i][j+1] == 1){
        s[k] = 'R' ; k++;
        Try(i, j+1, k);
    }
}

int main(){
    cin >> n;
    s="";
    for(int i = 1; i<= n ; ++i)
        for(int j = 1; j <= n; ++j)
            cin >> a[i][j];

    Try(1,1,0);
    if(kt == 0)  cout << -1 <<endl;
    return 0;
}