#include<bits/stdc++.h>
#include<iostream>
#define xxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long 

using namespace std;

const ll MAX = 1E7 + 5;
int Sum,Digits;
void init(){
    cin >> Sum >> Digits;
    if(Sum  > (9*Digits))   {cout <<-1<<endl ; return;}
    if(Sum == 0 && Digits == 1) {cout << 0 <<endl ; return;}
    if(Sum == 0 && Digits > 1)   {cout << -1 <<endl; return;}
    if(Sum < 10 && Digits == 1) {cout << Sum <<endl; return;}
    Sum -=1;
    int s[Digits];
    for(int i= Digits-1; i > 0 ; --i){
        if(Sum > 9){
            s[i] = 9;
            Sum -= 9;
        }
        else{
            s[i] = Sum;
            Sum = 0;
        }
    }
    s[0] =Sum + 1 ;
    for(int i=0; i<  Digits; ++i)
        cout << s[i];
}

int main(){
    xxx
    int t; cin >> t;
    while(t--){
        init();
        cout << endl;
    }
    return 0;
}

//copy by shincrab