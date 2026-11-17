#include <iostream>
using namespace std;

int main(){
    int m, n ; cin >> m >> n;
    int a[m][n];
    int positive = 0; int negative = 0; int equal_0 = 0;
    for (int i = 0 ; i < m ; i++){
        for (int j = 0; j < n ; j++){
            cin >> a[i][j];
            if(a[i][j] > 0){
                positive ++;
            }
            else if(a[i][j]){
                negative ++;
            }else{
                equal_0 ++;
            }
        }
    }
    cout << "So luong phan tu duong: " << positive << '\n';
    cout << "So luong phan tu am: " << negative << '\n';
    cout << "So luong phan tu bang 0: " << equal_0 ;
    return 0;

}