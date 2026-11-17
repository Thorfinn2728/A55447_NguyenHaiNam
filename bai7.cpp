#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n][n];
    int tr_A = 0;
    int dgcheophu= 0;
    for ( int i = 0; i < n ; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
            if(i == j){
                tr_A += a[i][j];
            }else if(i +  j == n - 1 ){
                dgcheophu+= a[i][j];
            }
        }
    }
    cout << "Tong duong cheo chinh: " << tr_A << '\n';
    cout << "Tong duong cheo phu: " << dgcheophu;
    return 0;
}