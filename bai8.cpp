#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n][n];
    int tong_tren = 0;int tong_duoi = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
            if(i < j){ // tam giac duoi
                tong_tren+= a[i][j];
            }else if( i > j){
                tong_duoi += a[i][j];
            }
        }
    }
    cout << "Tong tam giac tren :  " << tong_tren << '\n';
    cout << "Tong tam giac duoi : " << tong_duoi;
    return 0; 
}    