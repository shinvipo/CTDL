#include <iostream>
 
using namespace std;

int main()
{
    long long i, j, n, t , a[101][101],d,x,y,u;
    long long gt;
    cin >> u;
    
    long long fibo[101];
    fibo[1]=1; fibo[2]=1;
    for(int cou =3; cou <= 100; ++cou)
    	fibo[cou] = fibo[cou -1] + fibo[cou -2];
 //   cout <<"done"<<endl;
   for(long long in =1; in <= u; ++in)
    {
        cin >> n ;
        gt=1;t=1;
        d = n;
        
        while(gt <= n*n)
        {
            for(i=t; i<=d; i++) //gan gia tri tu trai sang phai
            {
                    a[t][i] = fibo[gt];
                    gt++;
            }
            for(i=t+1; i<=d; i++)//tu tren xuong
            {
                    a[i][d] = fibo[gt];
                    gt++;
            }
            for(i=d-1; i>=t; i--) //tu phai qua trai
            {
                a[d][i] = fibo[gt];
                gt++;
            }
            for(i=d-1; i>=t+1; i--) //tu duoi len tren
            {
                a[i][t] = fibo[gt];
                gt++;
            }
            t++; //
            d--; //dieu kien thu nho xoan oc
        }
    cout <<"Test "<<in <<":"<<endl;
    for( i=1; i<=n; ++i){
    	for ( j=1; j<=n; ++j)
    		cout << a[i][j] <<" ";
    	cout <<endl;
	}
    }
 
}
