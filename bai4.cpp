#include <iostream>
using namespace std;

const int MAX = 100;

int tongHang(int a[][MAX], int hang, int cot){
    int tong = 0;
    for(int i = 0; i < cot; i++){
        tong+= a[hang][i];
    }
    return tong;
}

int main(){
    int m,n ; cin >> m >> n;
    int a[m][MAX];
    for(int i = 0; i < m; i++){
        for(int j =0; j < n; j++){
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < m; i++){
        cout << "Tong cua hang " << i << " : " << tongHang(a, i, n) << '\n';
    }

    return 0;
}
