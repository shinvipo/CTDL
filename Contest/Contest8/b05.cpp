/*
    Note:
*/

#include<iostream>
#include<math.h>
#define xxxxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll MAX = 1E7 + 5;
const ll mod = 1E9 + 7;

long long bcd(int decimalNumber = 5) {
    long long binaryNumber = 0;
    int p = 0;
    while (decimalNumber > 0) {
        binaryNumber += (decimalNumber % 2) * pow(10, p);
        ++p;
        decimalNumber /= 2;
    }
    return binaryNumber;
}

int n;

void Init() { cin >> n; }

void Proc() {
    for (int i = 1; i <= n; i++) {
        cout << bcd(i) << " ";
    }
}

int main() {
    xxxxx
        int t = 1, mul_test = 1; if (mul_test) cin >> t;
    while (t--) {
        Init();
        Proc();
        cout << endl;
    }
    return 0;
}

/* ==> Shin <== */