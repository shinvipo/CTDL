/*
    Note:	
*/

#include<bits/stdc++.h>
#include<iostream>
#define xxxxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll; 
typedef unsigned long long ull; 
const ll MAX = 1E7 + 5;
const ll mod = 1E9 + 7;

int e,v,edge[1005],v_begin, v_end, vst[1005];

vector<int> ke[10005];

void Init(){
    cin >> v >> e >> v_begin >> v_end;
    for(int i=0; i<= v; ++i)    ke[i].clear();
    for(int i=0; i<= v; ++i)    vst[i] =0;
    memset(edge, 0, sizeof(edge));

    for(int i=1; i<= e; ++i){
        int a, b;   cin >> a >> b;
        ke[a].push_back(b);
    }

    queue<int> q;
    q.push(v_begin);
    vst[v_begin] = 1;

    while(!q.empty()){
        int i = q.front();
        q.pop();
        for(int j= 0; j < ke[i].size(); ++j){
            int tmp = ke[i][j];
            if(vst[tmp] == 0){
                q.push(tmp);
                vst[tmp] = 1;
                edge[tmp] = i;
            }
        }
    }
    stack <int> st;
    if(vst[v_end] == 1){
        int tmp = v_end;
        while(tmp > 0){
            st.push(tmp);
            tmp = edge[tmp];
        }
        while(!st.empty()){
            int k = st.top();
            st.pop();
            cout << k <<" ";
        }
    }
    else
    {
        cout << -1 ;
    }
    
}

void Proc(){}

int main(){
    xxxxx
    int t=1, mul_test = 1		; if(mul_test) cin >> t;
    while(t--){
        Init();
        Proc();
        cout << endl;
    }
    return 0;
}

/* ==> Shin <== */