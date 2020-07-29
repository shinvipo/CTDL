/*
    Note:	Day bitonic co tong lon nhat 
    Một dãy số được gọi là Bi-tonic nếu nó được chia thành hai dãy đầu tăng dần và dãy tiếp theo giảm
dần
*/

#include<bits/stdc++.h>
#include<iostream>
#define xxxxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll; 
typedef unsigned long long ull; 
const ll MAX = 1E7 + 5;
const ll mod = 1E9 + 7;

int n, A[101], dpInc[101], dpDec[101];
void Init(){
    cin >> n;
    for(int i=0; i< n; ++i){
        cin >> A[i];
        dpInc[i] = A[i];
        dpDec[i] = A[i];
    }
}

void Proc(){
    for(int i=1; i< n; ++i)
        for(int j=0; j<i; ++j)
            if(A[i] > A[j] && dpInc[i] <dpInc[j] +A[i])
                dpInc[i] = dpInc[j] + A[i];

    for(int i= n-2 ; i >= 0; --i)
        for(int j= n-1 ; j >i ; --j)
            if(A[i] > A[j] && dpDec[i] < dpDec[j] + A[i])
                dpDec[i] = dpDec[j] + A[i];
                
    int res = 0;
    for(int i=0; i< n; ++i)
        res = max(res , dpInc[i] +dpDec[i] - A[i]);

    cout <<res <<endl;
}

int main(){
    xxxxx
    int t=1, mul_test = 1		; if(mul_test) cin >> t;
    while(t--){
        Init();
        Proc();
    }
    return 0;
}

/* ==> Shin <== */