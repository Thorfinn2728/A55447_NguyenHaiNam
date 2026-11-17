#include <iostream>
using namespace std;

int main(){
    int m, n; cin >> m>> n;
    int a[m][n]; int b[m][n];
    int c[m][n] ={};
    for(int i =0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j] >> b[i][j];
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    cout << "Ma tran tong: " << '\n';
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << c[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}