#include <iostream>
using namespace std;

int main(){
    int m,n; cin >> m >> n;
    int maxx = 0; int minx = 0;
    int a[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j ++){
            cin >> a[i][j];
            if(i == 0 || a[i][j] > maxx) maxx = a[i][j];
            if(i == 0 || a[i][j] < minx) minx = a[i][j];
        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] == maxx){
                cout << "Gia tri MAX = " << maxx << ", nam o hang " << i << ", cot " << j << '\n';
                break;
            }
        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] == minx){
                cout << "Gia tri MIN = " << minx << ", nam o hang " << i << ", cot " << j;
                break;
            }
        }
    }
}