#include <bits/stdc++.h>

 using namespace std;



 signed main() {

        int n, m;

    cin >> n >> m;

     for (int i = 2;

 i <= n;

 i++) {

                cout << i << "\n";

                for (int j = 1;

 j <= m;

 j++) {

             if (j % i != 0){

                  cout << j << " ";

                

}

                       

}

            cout << "\n";

        

}

             return 0;



}

