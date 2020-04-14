#include<bits/stdc++.h>
#include<iostream>
#define xxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long 

using namespace std;


void init(){
    vector<int> a;
    vector<int> b;
    vector<int> c;
    int k =10;
    for(int i=0; i< 15; ++i)
        a.push_back(i);

    b = vector<int>(a);
    
    cout << "Vector a   :   ";
    for(int i=1; i< a.size() ; ++i) cout <<a[i] <<" ";
    cout <<endl<< "Vector  B    :   ";
    for(auto i:b)   cout << b[i] <<" ";

    c= vector<int> (k,0);
    cout <<endl;
    for(auto i:c)   cout << c[i]<<" ";

}

int main(){
    xxx
    int t; cin >> t;
    while(t--){
        init();

    }
    return 0;
}

//copy by shincrab