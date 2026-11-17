#include <iostream>
using namespace std;

const int MAX = 100;

bool laDoiXung(int a[][MAX], int hang, int cot){
  bool dx = false;
  for(int i = 0; i < hang; i++){
    for(int j = 0; j < cot; j++){
      if(a[i][j] == a[j][i]){
        dx = true;
        break;
      }
    }
  }
  return dx;
}

int main(){
  int n; cin >> n;
  int a[n][MAX];
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      cin >> a[i][j];
    }
  }

  if(laDoiXung(a, n,n) == true){
    cout << "Ma tran doi xung";
  }else{
    cout << "Ma tran khong doi xung: " << '\n';
    for(int i = 0; i <n ; i++){
      for (int j = 0; j < n; j++){
        cout << a[i][j] << " ";
      }
      cout << '\n';
    }
  }
  return 0;
}
