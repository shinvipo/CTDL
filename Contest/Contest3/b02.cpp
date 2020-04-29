#include<bits/stdc++.h>
#include<iostream>
#define xxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long 

using namespace std;

string a , b;
int a1, a2 , b1 , b2;

ll conv(string a){
    stringstream str2num(a);
    ll tmp = 0;
    str2num >> tmp;
    return tmp;
}

int solon(string a ){
    string maxx = a;
    for(int i = 0; i < a.length() ; ++i)
        if(a[i] == '5') a[i] = '6' ;
    return conv(a);
}

int sobe(string a){
    for(int i = 0; i < a.length() ; ++i)
        if(a[i] == '6') a[i] = '5';
    return conv(a);
}

void init(){
    cin >> a >> b;
    cout << sobe(a) + sobe(b) <<" " << solon(a) + solon(b) <<endl;
}

int main(){
    xxx
    init();
    return 0;
}

//copy by shincrab