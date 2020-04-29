#include <bits/stdc++.h> 
using namespace std; 
  
void survival(int S, int N, int M) 
{ 
    if (((N * 6) < (M * 7) && S > 6) || M > N) 
        cout << "-1"<<endl; 
    else { 
        int days = (M * S) / N; 
        if (((M * S) % N) != 0) 
            days++; 
        cout << days << endl; 
    } 
} 
  
int main() 
{ 
    int t; cin >> t;
    while(t--){
        int S ,N,M;
        cin >> N >> S >> M;
        survival(S, N, M); 
    }
    return 0;
} 