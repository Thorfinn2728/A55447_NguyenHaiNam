#include <iostream>
using namespace std;

int main(){
    int m, n ; cin >> m >> n;
    int a[m][n];
    int tong = 0;
    for (int i = 0; i < m; i++){
        for ( int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i ++){
        tong = 0;
        cout << "Tong cot " << i << " : ";
        for( int j = 0 ; j < m; j++){
            tong += a[j][i];
        }
        cout << tong << '\n';
    }
}