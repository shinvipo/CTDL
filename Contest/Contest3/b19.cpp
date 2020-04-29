#include<bits/stdc++.h>
#include<iostream>
#define xxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long 

using namespace std;

const ll MAX = 1E7 + 5;

void init(int nr , int dr){

    if(dr == 0 || nr == 0) {   return;}

    if(dr % nr == 0)    {cout << "1/"<< dr/nr << endl;  return;}
    
    if (nr%dr == 0)     {cout << nr/dr; return; } 

    if (nr > dr)        {cout << nr/dr << " + "; init(nr%dr, dr); return; } 

    int tmp = (dr / nr) +1;

    cout << "1/" << tmp <<" + ";

    init(nr*tmp - dr ,dr*tmp);
}

int main(){
    xxx
    int t; cin >> t;
    while(t--){
        int nr , dr ;   // nr = numerator = tử số ; dr = denomirator = mẫu số
        cin >> nr >> dr;
        init(nr,dr);

    }
    return 0;
}

//copy by shincrab