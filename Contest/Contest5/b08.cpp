/*
    Note:	hình vuông lớn nhất
*/

#include<bits/stdc++.h>
#include<iostream>
#define xxxxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll; 
const ll MAX = 1E7 + 5;
const ll mod = 1E9 + 7;
int row, col, res;

void Proc(vector<vector<int>> &A){

    for(int i=0; i<= row ; ++i){
        for(int j=0; j <= col ; ++j){
            if(A[i][j] ==1 && i > 0 && j > 0 ){
                A[i][j] = A[i][j] + min({A[i-1][j], A[i][j-1], A[i-1][j-1]});
            }
            res = max(res, A[i][j]);
        }
    }
    cout << res <<endl;
}

void Init(){
    res = 0;
    vector<vector<int>> A (1001, vector<int> (1001,0));
    cin >> row >> col;
    for(int i=0; i< row ; ++i)
        for(int j=0; j< col ; ++j)
            cin >> A[i][j];
    Proc(A);
}

int main(){
    xxxxx
    int t=1, mul_test =1		; if(mul_test) cin >> t;
    while(t--){
        Init();

    }
    return 0;
}

/* ==> Shin <== */