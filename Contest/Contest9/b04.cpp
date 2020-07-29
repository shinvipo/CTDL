/*
    Note:	DS kề => Matran Kề
*/

#include<bits/stdc++.h>
#include<iostream>
#define xxxxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll; 
typedef unsigned long long ull; 
const ll MAX = 1E7 + 5;
const ll mod = 1E9 + 7;
int A[1005][1005],n;

int nguyen(string s,int bd,int kt)
{
    int sum = 0 ;
    for (int i=bd+1;i<kt;i++)
        sum  = sum*10+ (s[i]-'0');
    return sum;
}
void Read1()
{
    int i=0,j;
    char c;
    cin >> n;
    while(i<=n)
    {   
        string s;
        getline(cin,s);
        s= " " +s+ " ";
        int d=0;
        int pos = s.find(" ",d);
        while (1)
        {
            int next_pos = s.find(" ",pos+1);
            if (next_pos == string::npos) break;
            A[i][nguyen(s,pos,next_pos)]=1;
            pos =next_pos;
        }
        i++;
    }
}
void printMatrix()
{
    int i,j;
    for(i=1;i<=n;i++)
        {
        for(j=1;j<=n;j++)
            if (i==j) printf("0 ");
        else
            printf("%d ",A[i][j]);
        printf("\n");
        }
}

int main(){
    xxxxx
    int t=1, mul_test = 0 ; if(mul_test) cin >> t;
    while(t--){
        Read1();
        printMatrix();
    }
    return 0;
}

/* ==> Shin <== */