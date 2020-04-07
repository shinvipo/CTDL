#include <iostream>
 
using namespace std;
 
int main()
{
    int i, j, n, t , a[101][101],d,x,y,u;
    long gt;
    cin >> u;
   for(int in =1; in <= u; ++in)
    {
        cin >> n ;
        gt=n*n;t=1;
        d = n;
        
        while(gt >= 1)
        {
            for(i=t; i<=d; i++) //gan gia tri tu trai sang phai
            {
                    a[t][i] = gt;
                    gt--;
            }
            for(i=t+1; i<=d; i++)//tu tren xuong
            {
                    a[i][d] = gt;
                    gt--;
            }
            for(i=d-1; i>=t; i--) //tu phai qua trai
            {
                a[d][i] = gt;
                gt--;
            }
            for(i=d-1; i>=t+1; i--) //tu duoi len tren
            {
                a[i][t] = gt;
                gt--;
            }
            t++; //
            d--; //dieu kien thu nho xoan oc
        }
    cout <<"Test "<<in <<":"<<endl;
    for(int i=1; i<=n; ++i){
    	for (int j=1; j<=n; ++j)
    		cout << a[i][j] <<" ";
    	cout <<endl;
	}
    }
 
}
