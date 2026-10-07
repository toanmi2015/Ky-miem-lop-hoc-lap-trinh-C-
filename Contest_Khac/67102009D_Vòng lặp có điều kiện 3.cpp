#include <bits/stdc++.h>
 using namespace std;

 signed main() {
        long long a, b, S;
    cin >> a >> b;
     S = 0;
     for (long long i = a;
 i < b;
 i++) {
         if (i % 3 == 0 && i % 2 != 0){
             S = S + i;
        
}
        
}
     cout << S;
     return 0;

}
