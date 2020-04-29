#include<bits/stdc++.h>
#include<iostream>
#define xxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long 

using namespace std;

ll nums;    string s;
vector<string> cubes;

void process(){
    int ind = 0;
    string ans ="-1";
    for(int i=cubes.size() -1; i > 0; --i){
        string curr = cubes[i];
        ind = 0;
        for(int j=0; j < s.length() ; ++j){
            if(s[j] == curr[ind])
                ind++;
            if(ind == curr.length())
                {cout << curr;return ;}
        }
    }
    cout << ans <<endl; return;
}

void init(){
    cubes.clear();
    cin >> nums;
    s = to_string(nums);
    for(int i=1; i*i*i <= nums ; ++i){
        ll tmp = i*i*i;
        string tmp2 = to_string(tmp);
        cubes.push_back(tmp2);
    }
    process();
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