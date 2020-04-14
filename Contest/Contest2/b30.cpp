#include<iostream>
#include<vector>
#define xxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long;

using namespace std;

int sum, num, prime,dem;
vector <int> res;
vector<int> primes ;
vector <int> sang(201,0);
vector <int> tmp;
void init() {
    dem=0;
    cin >> num >> prime >> sum;
    sang[0] = 1; sang[1] = 1;
    for(int i = prime ; i <= sum ; ++ i)
        if(sang[i] == 0)    primes.push_back(i);
}

void process() {
    for(int i=0 ; i < res.size() ; ++i)
        tmp.push_back(res[i]);
}

void Try(int total, int index) {
    if (total == sum && res.size() == num) {
        dem++;
        process();
        return;
    }
    if (total > sum || index == primes.size())
        return;

    res.push_back(primes[index]);
    Try(total + primes[index], index + 1);
    res.pop_back();
    Try(total, index + 1);
}

void display(){
    cout << dem <<endl;
    for(int i=0; i< tmp.size() ; ++i){
        if((i+1)% num)  cout << tmp[i] <<' ';
        else cout << tmp[i] << endl;
    }
}

int main() {
    xxx;
    int t; cin >> t;
    
    for(int i=2 ; i<= 200 ; ++i){
        if(sang[i] == 0)
            for(int j = 2*i ; j <= 200 ; j+=i)
                sang[j] = 1;
    }
    while (t--) {
        primes.clear();   res.clear();      tmp.clear();
        init();
        Try(0, 0);
        display();
    }
    return 0;
}