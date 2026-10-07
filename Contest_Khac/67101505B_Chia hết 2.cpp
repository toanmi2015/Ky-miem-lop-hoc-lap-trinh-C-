#include <bits/stdc++.h>

using namespace std;



 signed main() {

     long long a, b, c;

    cin >> a >> b >> c;

        if (c % a == 0 && c % b != 0) {

        cout << "HUY";

    

}

        if (c % b == 0 && c % a != 0) {

        cout << "DUONG";

    

}

        if ((c % a == 0 && c % b == 0) || (c % a != 0 && c % b != 0)) {

        cout << "TOI BI GAY";

    

}

     return 0;



}

