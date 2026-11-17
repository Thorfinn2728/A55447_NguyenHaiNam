#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int m,n; cin >> m >> n;
    int a[m][n];
    int sm = 0;
    for(int i = 0; i < m; i ++ ){
        for(int j = 0; j < n; j ++){
            cin >> a[i][j];
            sm+= a[i][j];
        }
    }
    cout << fixed << setprecision(2);
    cout << sm << '\n';
    cout << double(sm)/(m*n);
    return 0;

}