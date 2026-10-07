#include <bits/stdc++.h>

 using namespace std;



 int main() {

        long long x, y, z;

    cin >> x >> y >> z ;

     if (x + y > z && x + z > y && y + z > x) {

                                if ((x == y)||(y == z)||(z == x)) {

                        cout << "LA TAM GIAC CAN";

            

}

 else {

                                cout << "KHONG PHAI TAM GIAC CAN";

                

}

        

}

 else {

             cout << "KHONG PHAI TAM GIAC CAN";

        

}

        return 0;



}

