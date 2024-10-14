#include <bits/stdc++.h>
using namespace std;

int main() 
{
//	freopen ("BAI2.INP","r",stdin);
//	freopen ("BAI2.OUT","w",stdout);
    int n;   
    cin >> n;

    for (int i = 2; i <= n; ++i) {
        int a = i % 10;              
        int binhPhuong = i * i;                   
        int b = binhPhuong % 10; 

        if (a == b) {
            cout << i <<endl;
        }
    }

    cout << endl;
    return 0;
}







