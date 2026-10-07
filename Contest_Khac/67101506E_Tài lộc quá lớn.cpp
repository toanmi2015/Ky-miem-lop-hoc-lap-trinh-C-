#include <iostream>

 using namespace std;



 int main() {

        long long n;

    cin >> n;

        long long so_luong = 0;

        so_luong = so_luong + n / 100;

    n %= 100;

        so_luong = so_luong + n / 20;

    n %= 20;

        so_luong = so_luong + n / 10;

    n %= 10;

        so_luong = so_luong + n / 5;

    n %= 5;

     so_luong = so_luong + n / 1;

    n %= 1;

        cout << so_luong;

        return 0;



}

