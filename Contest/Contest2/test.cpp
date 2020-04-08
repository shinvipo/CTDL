//-------------Shinvipo----------------

#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    fast;
    // int t;   cin >> t;
    // while(--t){}
    int a[101][101];
    int ans =0; int n=5,row,col;
    // i = rows j = col
    for( row=1; row<= n; ++row)    for(col= 1; col <= n; ++col)    if(row==3 && col==5) a[row][col] = 1;
    for( row=1; row<= n; ++row)    {
        for(col= 1; col <= n; ++col){
            cout<< a[row][col]<<"\t";
        }   
        cout << endl;
    }
    cout <<"***********************"<<endl;
    row = 3, col = 5;
    cout << a[3][5];
    return 0;
}