#include<bits/stdc++.h>
#define xxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long;

using namespace std;

int n, a[101]; int sum =0;
int main(){
    xxx;
    int t; cin >> t;
    while(t--){
        sum =0;
        cin >> n;
        for(int i =1; i<= n; ++i)  {
            cin >> a[i];
            sum += a[i];
        }
        if(sum % 2 == 1)
            cout <<"NO"<<endl;
        else{
            sum /= 2;
            vector<int> dp(sum+1,0);
            dp[0] = 1;
            for(int i = 1; i <= n; ++i)
                for(int j= sum ; j >= a[i] ; --j)
                    dp[j] = dp[j] || dp[j - a[i]];
            if(dp[sum] == 0)
                cout <<"NO" <<endl;
            else cout <<"YES"<<endl;
        }
    }
    return 0;
}