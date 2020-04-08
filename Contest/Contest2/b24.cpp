#include<bits/stdc++.h>
#define xxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long;

using namespace std;

int a[101], b[101], n, sum, check=0;

void display(){
    int t = 0, c[101], k=1;
    for(int i = 1; i <= n; ++i)
        t += a[i]*b[i];
    if(t == sum){
        check = 1;
        for(int i = 1; i<= n; ++i)
            if(b[i] == 1)   c[k++] = a[i];
        cout <<'[';
        for(int i =1; i < k-1; ++i)
            cout <<c[i] <<" ";
        cout << c[k-1] <<"] ";
    }
}

void Try(int i){
    for(int j =1; j >= 0; --j){
        b[i] = j;
        if(i == n)  display();
        else    Try(i+1);
    }
}

int main(){
    xxx;
    int t;   cin >> t;
    while(t--){
        cin >> n >> sum;
        for(int i = 1; i<= n; ++i)   cin >> a[i];
        sort(a+1,a+1+n);
        Try(1);
        if(check == 0)  cout <<-1;
        cout << endl;
    }
    return 0;
}