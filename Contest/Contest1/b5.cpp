#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<fstream>
using namespace std;
// sinh hoan vi

int a1[100][100], b[100][100];
int n = 28;    int k = 2;
vector <int> blacklist = { 15,5,13,18,11,17,8,21,22,7 };
int a[100] = {0, 1,2 };

struct dataa
{
    int id;
    char charr;
};

bool check1(int x) {
    if (x >= '0' && x <= '9')
        return true;
    if (x >= 'a' && x <= 'z')
        return true;
    if (x >= 'A' && x <= 'Z')
        return true;
    return false;
}

bool check2(int s, int e) {
    int i = s;
    for (int j = 1; j <= k; ++j) {
        if (check1(a1[i][a[j]]) == false)    return false;
        i++;
    }
    return true;
}

void printt() {
    ofstream out("12.txt", ios::out | ios::app);
    do {
        if (check2(6,7) == true)
            //continue;
            out << a[1] << " " << a[2] << " " << (char)a1[6][a[1]] << (char)a1[7][a[2]] << endl;
    } while (next_permutation(a + 1, a + k + 1));
    out.close();
}
void sinh(int k = 2) {
    int i = k;
    while (a[i] == n - k + i) i--;
    a[i]++;
    for (int x = 0; x < blacklist.size();++x) {
        if (a[i] == blacklist[x]) {
            a[i]++; x = 0;
        }
    }
    for (int j = i + 1; j <= k; j++) {
        a[j] = a[j - 1] + 1;
        for (int x = 0; x < blacklist.size(); ++x) {
            if (a[j] == blacklist[x]) {
                a[j]++; x = 0;
            }
        }
    }
    printt();
}
bool check(int k = 2) {
    for (int i = 1; i <= k; i++) {
        if (a[i] != n - k + i) {
            return false;
        }
    }
    return true;
}


int main()
{
    //  3f 5b 42 8f 91 
    int xo1[] = { 0,0x11b ,0xab ,0x9f ,0x4e ,0x5b ,0x70 ,0x12b ,0x4c ,0xa6 ,0x101 ,0x91 ,0x7c ,0x42 ,0x48 ,0x3f ,0xaa ,0x12c ,0x8f ,0x95 ,0x84 ,0x56 ,0xe7 ,0xdb ,0x60 ,0xef ,0xe0 ,0xbe ,0xc5 };
    int xo2[] = { 0,0x69 ,0x15 ,0x12 ,0xdb ,0xea ,0x0c ,0xa5 ,0x13 ,0xe6 ,0x7e ,0xfe ,0x09 ,0xae ,0x2e ,0x94 ,0x07 ,0xb8 ,0xbc ,0x10 ,0x132 ,0xb7 ,0x16b ,0x174 ,0xd9 ,0x96 ,0xcc ,0x94 ,0x151 };
    char res[100] = { 0 };
    for (int i = 1; i <= 28; ++i) {
        for (int j = 1; j <= 28; ++j) {
            int tmp;
            tmp = xo2[i] ^ xo1[j];
            a1[i][j] = tmp;
            //            out << i <<","<<j<<" " <<(char) tmp <<"\t";
            //            cout << i <<","<<j<<(char) tmp <<"\t";
        }
    }
    cout << (char)a1[1][15] << (char)a1[2][5] << (char)a1[3][13] << (char)a1[4][18] << (char)a1[5][11] << (char)a1[28][17] << endl;
    
    printt();
    while (check() == false) {
        sinh(k);
 //       out << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << endl;
    }

    return 0;
}

