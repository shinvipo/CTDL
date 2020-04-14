#include<bits/stdc++.h>
#define xxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

vector <char> path ;
int a[100][100], visited[100][100], n, k , check = 0;

void display(){
    for(int i =0 ; i<path.size() ; ++i)
        cout << path[i];
    cout <<" ";
}

void Try(int row, int col ){
    if(row == n && col == n){
        display();
        check = 1;
        return;
    }
    if(row < n && a[row + 1][col] && visited[row + 1][col] == 0){
        path.push_back('D');
        visited[row+1][col] = 1;
        Try(row + 1 , col);
        path.pop_back();
        visited[row+1][col] = 0;    
    }

    if(col < n && a[row][col + 1] && visited[row][col +1] == 0){
        path.push_back('R');
        visited[row][col +1] = 1;
        Try(row, col +1);
        path.pop_back();
        visited[row][col +1] = 0;
    }

}

int main(){
    xxx;
    int t;   cin >> t;
    while(t--){
        cin >> n;
        check =0;
        for(int i = 1; i <= n; ++i) for(int j =1 ; j <= n; ++j) cin >> a[i][j];
        if(a[1][1] == 0) cout <<-1<<endl;
        else{
            visited[1][1] = 1;
            Try(1,1);
            if(check == 0) cout << -1;
            cout <<endl;
        }
    }
    return 0;
}