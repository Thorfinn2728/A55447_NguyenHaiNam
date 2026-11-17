#include <iostream>
using namespace std;

int main(){
    int m,n,p; cin >> m>> n>>p; // co 2 ma tran co mxn va nxp
    int a[m][n];
    int b[n][p];
    int c[m][p] ={};

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < n ;i++){
        for(int j = 0; j < p; j++){
            cin >> b[i][j];
        }
    }
    int tong = 0;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < p ; j++){
            for(int k = 0; k < n; k++){
                c[i][j] += a[i][k] * b[k][j];
                
            }
        }
    }
    cout << "Ma tran tich: " << '\n';
    for(int i = 0; i < m; i++){
        for(int j = 0; j < p; j++){
            cout << c[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
    

}