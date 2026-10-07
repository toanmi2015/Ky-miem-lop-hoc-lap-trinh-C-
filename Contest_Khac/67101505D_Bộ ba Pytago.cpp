#include <bits/stdc++.h>

using namespace std;



 signed main() {

     long long a, b, c;

    cin >> a >> b >> c;

        if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a )) {

                cout << "YES";

     

}

    else {

         cout << "NO";

     

}

     return 0;

 

}

