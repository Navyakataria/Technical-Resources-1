#include <iostream>
using namespace std;
int main(){
  int n;
  cin >> n;
  int a=1;
  int b=1;
  cout << "0" << endl;
  cout << b << " " << a << endl;
  for(int i=3; i<=n ; i++){
    for(int j=1; j<=i; j++){
        int nextnumber=a+b;
        cout << nextnumber << " ";
        a=b;
        b=nextnumber;
    }
    cout << endl;
  }
}
