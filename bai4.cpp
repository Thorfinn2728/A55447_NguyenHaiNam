#include <iostream>
using namespace std;

/*
int tongHang(int a[][100], int n, int i){
    int tong = 0;
    for(int j= 0; j < n; j++ ){
        tong+= a[n][j];
    }
    return 0;

}
    */
    

int main(){
    int m,n; cin >>m >> n;
    int a[m][n];
    int tong = 0;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];   
        }
    }
    for(int i = 0; i < m; i++){
        tong = 0;
        cout << "Tong cua hang " << i << " : ";
        for(int j = 0; j < n; j++){
            tong+= a[i][j];
        }
        cout << tong << '\n';
    }


    return 0;
}