#include <bits/stdc++.h>
using namespace std;

 signed main() {
	    int n;
    cin >> n;
    cout << "GIO: " << n/3600 << "\n";
    cout << "PHUT: " << (n % 3600) / 60 << "\n";
    cout << "GIAY: " << n % 60;
        return 0;

}
